class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mLast = m - 1,
            nLast = n - 1;
        for (int i = m + n - 1; i >= 0; i--) {
            if (mLast >= 0 && nLast >= 0) {
                if (nums1[mLast] >= nums2[nLast]) {
                    nums1[i] = nums1[mLast--];
                } else {
                    nums1[i] = nums2[nLast--];
                }
            } else if (mLast >= 0) {
                nums1[i] = nums1[mLast--];
            } else {
                nums1[i] = nums2[nLast--];
            }
        }
    }
};
