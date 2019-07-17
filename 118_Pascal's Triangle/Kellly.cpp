class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        
        if (numRows == 0) {
            return {};
        }
        pascal.push_back({1});
            
        if (numRows == 1) {
            return pascal;
        }
        
        pascal.push_back({1, 1});
        if (numRows == 2) {
            return pascal;
        }
        
        for (int i = 2; i < numRows; i++) {
            pascal.push_back({});
            
            pascal[i].push_back(1);
            for (int j = 0; j < pascal[i-1].size() - 1; j++) {
                pascal[i].push_back(pascal[i-1][j] + pascal[i-1][j+1]);
            }
            pascal[i].push_back(1);
        }
        
        return pascal;
    }
};
