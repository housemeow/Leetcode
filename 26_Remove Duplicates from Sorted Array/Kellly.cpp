class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        
        int size = 1,
            num = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != num) {
                nums[size++] = nums[i];
                num = nums[i];
            }
        }
        
        return size;
    }
};
