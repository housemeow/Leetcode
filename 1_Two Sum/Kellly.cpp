class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> maps;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int value = nums[i];
            map<int, int>::iterator it = maps.find(target - value);
            if (it != maps.end()) {
                return { it->second, i };
            } else {
                maps.insert(std::pair<int, int>(value, i));
            }
        }
        return {};
    }
};
