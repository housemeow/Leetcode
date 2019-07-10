class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) {
            return -1;
        }
        int start = findStart(nums);
        
        return find(nums, target, start, 0, nums.size() - 1);
    }
    
    int findStart(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return i + 1;
            }
        }
        
        return 0;
    }
    
    int find(vector<int>& nums, int& target, int& start, int left, int right) {
        
        if (left > right) {
            return -1;
        }
        int index = (left + right) / 2;
        int valueIndex = transform(nums.size(), start, index);
        
        if (nums[valueIndex] == target) {
            return valueIndex;
        } else if (nums[valueIndex] < target) {
            return find(nums, target, start, index + 1, right);
        } else {
            return find(nums, target, start, left, index - 1);
        }
    }
    
    int transform(int size, int& start, int index) {
        return (start + index) % size;
    }
};
