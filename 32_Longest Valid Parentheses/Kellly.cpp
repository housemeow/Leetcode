class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.size() == 0) {
            return 0;
        }
        
        vector<vector<int>> pairs = findPairs(s);
        
        bool merged,
             grown;
        
        do {
            merged = merge(pairs);
            grown = grow(pairs, s);
        } while (merged || grown);
        
        int max = 0;
        
        for (vector<int> pair: pairs) {
            int size = pairSize(pair);
            if (size > max) {
                max = size;
            }
        }
        
        return max;
    }
    
    vector<vector<int>> findPairs(string& s) {
        vector<vector<int>> pairs;
        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == '(' & s[i + 1] == ')') {
                vector<int> pair;
                pair.push_back(i);
                pair.push_back(i + 1);
                pairs.push_back(pair);
            }
        }
        
        return pairs;
    }
    
    bool merge(vector<vector<int>>& pairs) {
        bool merged = false;
        
        for (int i = 0; i + 1 < pairs.size(); i++) {
            if (pairs[i][1] + 1 == pairs[i + 1][0]) {
                pairs[i][1] = pairs[i + 1][1];
                merged = true;
                pairs.erase(pairs.begin() + i + 1);
                i--;
            }
        }
        
        return merged;
    }
    
    bool grow(vector<vector<int>>&pairs, string str) {
        bool grown = false;
        for (int i = 0; i < pairs.size(); i++) {
            vector<int> pair = pairs[i];
            int left = pair[0],
                right = pair[1];
            
            if (left - 1 >= 0 && str[left - 1] == '(' &&
                right + 1 < str.size() && str[right + 1] == ')') {
                pairs[i][0]--;
                pairs[i][1]++;
                grown = true;
            }
        }
        
        return grown;
    }
    
    int pairSize(vector<int>& pair) {
        return pair[1] - pair[0] + 1;
    }
};
