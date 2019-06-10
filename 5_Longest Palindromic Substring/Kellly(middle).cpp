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

        for (int middle = 0; middle < s.length(); middle++) {
            int size = maxSize,
                start = middle - (size - 1) / 2,
                end = middle + size / 2;

            if (start >=0 && end < s.length()) {
                if (mirror(s, start, end)) {
                    maxSize = size;
                    index = start;
                    
                    for (start--, end++; start >=0 && end < s.length(); start--, end++) {
                        if (s[start] == s[end]) {
                            maxSize += 2;
                            index = start;
                        } else {
                            break;
                        }
                    }
                }
            }
            
            size = maxSize + 1;
            start = middle - (size - 1) / 2;
            end = middle + size / 2;

            if (start >=0 && end < s.length()) {
                if (mirror(s, start, end)) {
                    maxSize = size;
                    index = start;
                    
                    for (start--, end++; start >=0 && end < s.length(); start--, end++) {
                        if (s[start] == s[end]) {
                            maxSize += 2;
                            index = start;
                        } else {
                            break;
                        }
                    }
                }
            }
        }
        
        return s.substr(index, maxSize);
    }
};
