class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) {
            return 0;
        }
        
        list<char> l;
        int max = 0;
        
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            list<char>::iterator it;
            int removed = 0;
            for (it = l.begin(); it != l.end(); it++) {
                removed++;
                if (*it == ch) {
                    while (removed > 0) {
                        l.pop_front();
                        removed--;
                    }
                    
                    break;
                }
            }
            
            l.push_back(ch);
            if (it == l.end() && l.size() > max) {
                max = l.size();
            }
        }
        
        return max;
    }
};
