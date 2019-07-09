class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (target < nums[0]) {
            return 0;
        } else if (target > nums[nums.size() - 1]) {
            return nums.size();
        }
        return findIndex(nums, target, 0, nums.size() - 1);
    }
    
    int findIndex(vector<int>& nums, int target, int left, int right) {
        if (left == right || left + 1 == right) {
            return nums[left] == target ? left : right;
        }
        
        int index = (left + right) / 2;
        
        if (nums[index] > target) {
            return findIndex(nums, target, left, index);
        } else if (nums[index] < target) {
            return findIndex(nums, target, index, right);
        } else {
            return index;
        }        
    }
};
