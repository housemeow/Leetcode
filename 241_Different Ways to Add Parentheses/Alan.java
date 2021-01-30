// 使用分治法，遇到一個運算符號時，分成左右兩邊，利用遞迴算出各自結果的組合
// 再用當下的運算符號計算。
// 當"ways"為空的時候代表"input"沒有任何運算符號，所以要直接把input加入結果中。

class Solution {
    public List<Integer> diffWaysToCompute(String input) {
        List<Integer> ways = new ArrayList();
        for (int i  = 0; i < input.length(); i++) {
            char c = input.charAt(i);
            if (c == '+' || c == '-' || c == '*') {
                List<Integer> leftValues = diffWaysToCompute(input.substring(0, i));
                List<Integer> rightValues = diffWaysToCompute(input.substring(i + 1));
                for (int leftValue: leftValues) {
                    for (int rightValue: rightValues) {
                        int value = 0;
                        switch(c) {
                            case '+':
                                value = leftValue + rightValue;
                                break;
                            case '-':
                                value = leftValue - rightValue;
                                break;             
                            case '*':
                                value = leftValue * rightValue;
                                break;
                        }      
                        ways.add(value);
                    }
                }
            }
        }
        if (ways.isEmpty()) {
            ways.add(Integer.valueOf(input));
        }
        return ways;
    }
}
