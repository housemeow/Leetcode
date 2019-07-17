class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> indexes; // <number, index>
        
        for(int i = 0; i < numbers.size(); i++) {
            int number = numbers[i];
            map<int, int>::iterator found = indexes.find(target - number);
            if (found != indexes.end()) {
                return {found->second + 1, i + 1};
            } else {
                indexes.insert(pair<int, int>(number, i));
            }
        }
        
        return {};
    }
};
