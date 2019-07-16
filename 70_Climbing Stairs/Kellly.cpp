class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        }
        
        int table[n + 1];
        table[1] = 1;
        table[2] = 2;
        
        for (int step = 3; step <= n; step++) {
            table[step] = table[step - 1] + table[step - 2];
        }
        
        return table[n];
    }
};
