class Solution {
public:
    bool isMatch(string s, string p) {
        vector<string> chunks = getPatternChunks(p);
        
        return checkMatch(s, chunks);
    }
    
    bool isAny(string p) {
        return p.find("*") != string::npos;
    }
    
    vector<string> getPatternChunks(string p) {
        vector<string> chunks;
        
        for (int index = 0; index < p.size();) {
            char ch = p[index];
            int chunkLength;
            
            if (index + 1 < p.size() && p[index + 1] == '*') {
                chunkLength = 2;
            } else {
                chunkLength = 1;
            }

            string chunk = p.substr(index, chunkLength);
            chunks.push_back(chunk);
            index += chunkLength;
        }
        
        return chunks;
    }
    
    bool checkMatch(string s, vector<string> &chunks) {
        while (s.size() > 0 && chunks.size() > 0) {
            string pattern = chunks.front();
            
            if (isAny(pattern)) {
                int notAnyIndex;
                for (notAnyIndex = 1; notAnyIndex < chunks.size(); notAnyIndex++) {
                    if (!isAny(chunks[notAnyIndex])) {
                        break;
                    }
                }
                
                bool found = false;
                
                if (notAnyIndex < chunks.size()) {
                    for (int pIndex = 0; pIndex < notAnyIndex; pIndex++) {
                        if (chunks[pIndex][0] == chunks[notAnyIndex][0]) {
                            found = true;
                            break;
                        }
                    }
                }
                
                if (found) {
                    for (int i = 0; i < s.size(); i++) {
                        string restS = s.substr(i, s.size() - i);
                        vector<string> restChunks(chunks.begin() + notAnyIndex, chunks.end());
                        if (checkMatch(restS, restChunks) || restChunks.size() == 0) {
                            string beginS = s.substr(0, i);
                          
                            for (int pIndex = 0; pIndex < notAnyIndex; pIndex++) {
                                char pCh = chunks[pIndex][0];
                                if (pCh == '.') {
                                    return true;
                                } else {
                                    while (beginS.size() > 0 && beginS[0] == pCh) {
                                        beginS = beginS.substr(1, beginS.size() - 1);
                                    }
                                }
                            }
                            
                            if (beginS.size() == 0) {
                                return true;
                            }
                        }
                    }
                    
                    return false;
                } else {
                    for (int pIndex = 0; pIndex < notAnyIndex; pIndex++) {
                        char pCh = chunks[pIndex][0];
                        if (pCh == '.') {
                            for (int i = 0; i < s.size(); i++) {
                                string restS = s.substr(i, s.size() - i);
                                vector<string> restChunks(chunks.begin() + 1, chunks.end());
                                if (checkMatch(restS, restChunks) || restChunks.size() == 0) {
                                    return true;
                                }
                            }
                            return false;
                        } else {
                            while (s.size() > 0 && s[0] == pCh) {
                                s = s.substr(1, s.size() - 1);
                            }
                        }
                    }
                    chunks.erase(chunks.begin(), chunks.begin() + notAnyIndex);
                }

            } else {
                if (pattern == "." || s.substr(0, 1) == pattern) {
                    s = s.substr(1, s.size() - 1);
                    chunks.erase(chunks.begin(), chunks.begin() + 1);
                } else {
                    return false;
                }
            }
        }
        
        return s.size() == 0 && chunks.size() == 0;
    }
};
