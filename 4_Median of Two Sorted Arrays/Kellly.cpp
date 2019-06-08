class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        list<int> list1, list2;
        for(int i: nums1) {
            list1.push_back(i);
        }
        for(int i: nums2) {
            list2.push_back(i);
        }
        
        int found = 0;
        list<int> nums;
        while (true) {
            if (size % 2 == 1) {
                if (found == size / 2 + 1) {
                    return nums.back();
                }
            } else {
                if (found == size / 2 + 1) {
                    return (nums.front() + nums.back()) / 2.0;
                }
            }
            
            if (list1.size() && list2.size()) {
                if (list1.front() < list2.front()) {
                    nums.push_back(list1.front());
                    list1.pop_front();
                } else {
                    nums.push_back(list2.front());
                    list2.pop_front();
                }
            } else if (list1.size()) {
                nums.push_back(list1.front());
                list1.pop_front();
            } else if (list2.size()) {
                nums.push_back(list2.front());
                list2.pop_front();
            }

            found++;
            if (nums.size() > 2) {
                nums.pop_front();
            }
        }
        
        return 0;
    }
};
