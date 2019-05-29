class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        set<char> jewels;
        
        for (int i = 0; i < J.length(); i++) {
            jewels.insert(J[i]);
        }
        
        set<char>::iterator notFound = jewels.end();
        
        for (int i = 0; i < S.length(); i++) {
            if (jewels.find(S[i]) != notFound) {
                count++;
            }
        }
        
        return count;
    }
};
