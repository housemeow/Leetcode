class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0) {
            return {1};
        } else if (rowIndex == 1) {
            return {1, 1};
        }
        
        vector<int> pascal = {1, 1};
        for (int i = 2; i <= rowIndex; i++) {
            
            for(int j = pascal.size() -1 ; j >= 1; j--) {
                pascal[j] = pascal[j] + pascal[j-1];
            }
            pascal.push_back(1);
        }
        
        return pascal;
    }
};
