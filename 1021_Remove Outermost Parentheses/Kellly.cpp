class Solution {
public:
    string removeOuterParentheses(string S) {
        string output;
        stack<char> temp;
        int waitForPair = 0;
        for (char ch: S) {
            if (ch == '(') {
                waitForPair++;
                temp.push(ch);
            } else if (ch == ')') {
                waitForPair--;
                temp.push(ch);
            }
            
            if (waitForPair == 0) {
                string inner;
                temp.pop();
                while (temp.size() >= 2) {
                    inner = temp.top() + inner;
                    temp.pop();
                }
                temp.pop();
                
                output += inner;
            }
        }
        
        return output;
    }
};
