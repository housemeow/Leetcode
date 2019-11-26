class Solution {
public:
    bool isMatch(string s, string p) {
        int sSize = s.size(),
            pSize = p.size();
        bool match[sSize+1][pSize+1];
        
        memset(match, false, sizeof(match));
        match[0][0] = true;

        // OK
        for (int i = 1; i <= pSize; i++) {
            char pCh = p[i-1];
            match[0][i] = pCh == '*' && match[0][i-1];
        }
        

        for (int i = 1; i <= sSize; i++) {
            for (int j = 1; j <= pSize; j++) {
                bool &ans = match[i][j];
                char sCh = s[i-1];
                char pCh = p[j-1];
                if (sCh == pCh || pCh == '?') {
                    ans = match[i-1][j-1];
                } else if (pCh == '*') {
                    ans = match[i-1][j] || match[i][j-1];
                }
            }
        }
        return match[sSize][pSize];
    }
};
