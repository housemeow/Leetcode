class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sSize = s.size();
        int tSize = t.size();
        
        if (sSize == 0) {
            return true;
        }
        
        if (tSize == 0) {
            return false;
        }
        
        if (tSize < sSize) {
            return false;
        }
        
        int sp = 0;
        for (int i = 0; i < tSize; i++) {
            if (t[i] == s[sp]) {
                sp++;
                if (sp == sSize) return true;
            }
        }
        
        return false;
    }
};
