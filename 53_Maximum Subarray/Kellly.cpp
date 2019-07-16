class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        
        int size = nums.size();
        int max = nums[0];
        int table[size];
        
        table[0] = nums[0];
        
        for (int i = 1; i < size; i++) {
            if (nums[i] > table[i - 1] + nums[i]) { // 自己更大
                table[i] = nums[i];
            } else {
                table[i] = nums[i] + table[i - 1];
            }
        }
        
        for (int i = 0; i < size; i++) {
            if (table[i] > max) {
                max = table[i];
            }
        }
        
        return max;
    }
};
