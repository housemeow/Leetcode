class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> array;
        map<int, int> maps;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            int value = nums[i];
            map<int, int>::iterator it = maps.find(target - value);
            if (it != maps.end()) {
                array.push_back(it->second);
                array.push_back(i);
                return array;
            } else {
                maps.insert ( std::pair<int,int>(nums[i], i) );
            }
        }
        return array;
    }
};
