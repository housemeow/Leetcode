#include <cmath>

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        if (size == 0 || size == 1) {
            return 0;
        }
        
        int mins[size+1];
        mins[0] = 0;
        mins[1] = cost[0];
        
        for (int i = 2; i <= size; i++) {
            mins[i] = min(mins[i-1], mins[i-2]) + cost[i-1];
        }
        
        return min(mins[size], mins[size-1]);
    }
};
