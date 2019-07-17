class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int value = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            value ^= nums[i];
        }
        
        return value;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i+1]) {
                return nums[i];
            }
        }
        
        return nums[nums.size() - 1];
    }
};
