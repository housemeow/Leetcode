class Solution {
public:
    bool mirror(string &s, int start, int end) {
        while(start < end) {
            if (s[start] != s[end])
                return false;
                
            start++;
            end--;
        }
        
        return true;
    }

    string longestPalindrome(string s) {
        int index = 0;
        int maxSize = 1;
        
        for (int end = 1; end < s.length(); end++) {
            for (int start = end - maxSize; start >= 0; start--) {
                if (mirror(s, start, end)) {
                    maxSize = end - start + 1;
                    index = start;
                }
            }
        }
        
        return s.substr(index, maxSize);
    }
};
