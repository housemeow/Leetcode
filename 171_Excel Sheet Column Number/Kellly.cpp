class Solution {
public:
    int titleToNumber(string s) {
        int number = 0;
        for (char ch: s) {
            int digit = (ch - 'A') + 1;
            number = number * 26 + digit;
        }
        
        return number;
    }
};
