class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() == 0) {
            return;
        }
        
        int size = nums.size();
        int max = size - 1;
        for (int i = size - 2; i >= 0; i--) {
            if (nums[i] >= nums[max]) {
                max = i;
            } else {
                // mutataion
                int largerIndex = findLargerIndex(nums, nums[i], max, size);
                int temp = nums[largerIndex];
                nums[largerIndex] = nums[i];
                nums[i] = temp;
                sort(nums.begin() + i + 1, nums.end());
                return;
            }
        }
        
        sort(nums.begin(), nums.end());
    }
    
    int findLargerIndex(vector<int>& nums, int num, int begin, int end) {
        int index = begin,
            diff = nums[index];
        for (int i = begin; i < end; i++) {
            if (nums[i] > num && nums[i] - num < diff) {
                index = i;
                diff = nums[i] - num;
            }
        }
        return index;
    }
}; 
