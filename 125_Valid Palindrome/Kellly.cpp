class Solution {
public:
    bool isPalindrome(string s) {
        int begin = 0,
            end = s.size() - 1;
        
        while (begin < end) {
            char beginChar = s[begin],
                 endChar = s[end];
            if (isLetter(beginChar) && isLetter(endChar)) {
                if (!same(beginChar, endChar)) {
                    return false;
                }
                begin++;
                end--;
            } else {
                if (!isLetter(beginChar)) {
                    begin++;
                }
                if (!isLetter(endChar)) {
                    end--;
                }
            }
        }
        
        return true;
    }
    
    bool isLetter(char ch) {
        return 'A' <= ch && ch <= 'Z' ||
               'a' <= ch && ch <= 'z' ||
               '0' <= ch && ch <= '9';
    }
    
    bool same(char a, char b) {
        a = 'A' <= a && a <= 'Z' ? a - 'A' + 'a' : a;
        b = 'A' <= b && b <= 'Z' ? b - 'A' + 'a' : b;
        
        return a == b;
    }
};
