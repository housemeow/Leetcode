class Solution {
public:
    bool isMatch(string s, string p) {
        const int sSize = s.size(), pSize = p.size();
        bool dp[pSize + 1][sSize + 1]; // Pattern Matched
        memset(dp, false, sizeof(bool) * (sSize + 1) * (pSize + 1));
        dp[0][0] = true;
        
        for (int j = 2; j <= pSize; j++) { // 處理*的Pattern Matched
            if (p[j - 1] == '*') dp[j][0] = dp[j - 2][0];
        }
        
        for (int i = 1; i <= sSize; i++) {
            for (int j = 1; j <= pSize; j++) {
                char pCh = p[j - 1],
                     sCh = s[i - 1];
                if (pCh == sCh || pCh == '.') {
                    dp[j][i] = dp[j-1][i-1]; // 可消掉一個字，但若之前不符合就沒辦法了
                } else if (pCh == '*') { // if *
                    if (p[j - 2] == sCh || p[j - 2] == '.') { // 前一個字符合 (可能可以消)
                        dp[j][i] = dp[j-2][i] || // 不消，忽略看看參考先前的結果
                                   dp[j-1][i] || // pattern沒有*如果也match，加*當然也match
                                   dp[j  ][i-1]; // string少一個字如果也相同，代表是同一個字可以消
                    } else {
                        dp[j][i] = dp[j-2][i]; // 不能消，只能忽略然後參考先前的match結果
                    }
                }
            }
        }
        return dp[pSize][sSize];
    }
};
