class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codes = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> results;
        
        for(int i = 0; i < words.size(); i++) {
            string str;
            
            for (int j = 0; j < words[i].size(); j++) {
                str += codes[words[i][j] - 97];
            }
            
            results.insert(str);
        }
        
        return results.size();
    }
};
