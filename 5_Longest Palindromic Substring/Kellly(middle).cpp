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
            for (int i = 0; i <= 1; i++) {
                // try odd, even length substring
                int size = maxSize + i,
                    start = middle - (size - 1) / 2,
                    end = middle + size / 2;
                
                if (start >=0 && end < s.length()) {
                    if (mirror(s, start, end)) {
                        if (size > maxSize) {
                            maxSize = size;
                            index = start;
                        }

                        for (start--, end++, size += 2; start >=0 && end < s.length(); start--, end++, size += 2) {
                            if (s[start] == s[end] && size > maxSize) {
                                maxSize = size;
                                index = start;
                            } else {
                                break;
                            }
                        }
                    }
                }
            }
        }
        
        return s.substr(index, maxSize);
    }
};
