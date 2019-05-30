class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int, int> table;
        
        for (int value: A) {
            if (table[value] == 1) {
                return value;
            } else {
                table[value] = 1;
            }
        }
        
        return 0;
    }
};
