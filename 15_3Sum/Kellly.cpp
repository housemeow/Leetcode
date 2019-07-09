class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vectors;
        sort(nums.begin(), nums.end());

        for (int left = 0; left < nums.size() && nums[left] <= 0; left = nextLeft(nums, left)) {
            for (int right = nums.size() - 1; right > 0 && nums[right] >= 0 && left < right; right = nextRight(nums, right)) {
                int index = findIndex(nums, nums[left] + nums[right], left + 1, right - 1);
                
                if (index != -1) {
                    vector<int> found;
                    found.push_back(nums[left]);
                    found.push_back(nums[index]);
                    found.push_back(nums[right]);
                    vectors.push_back(found);
                }
            }
        }
        
        return vectors;
    }
    
    int nextRight(vector<int>& nums, int right) {
        int num = nums[right];
        while (right >= 0 && nums[right] == num) {
            right--;
        }
        
        return right;
    }
    
    int nextLeft(vector<int>& nums, int left) {
        int num = nums[left];
        while (left < nums.size() && nums[left] == num) {
            left++;
        }
            
        return left;
    }
    
    int findIndex(vector<int>& nums, int num, int left, int right) {
        if (left <= right) {
            int index = (left + right) / 2;
            
            if (nums[index] + num < 0) {
                return findIndex(nums, num, index + 1, right);
            } else if (nums[index] + num > 0) {
                return findIndex(nums, num, left, index - 1);
            } else {
                return index;
            }
        }
        return -1;
    }
};
