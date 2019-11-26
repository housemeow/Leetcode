class NumArray {
public:
    NumArray(vector<int>& nums) {
        int size = nums.size();
        int* &sum = this->sum;
        
        if (size == 0) {
            return;
        }
        
        sum = new int[size];
        sum[0] = nums[0];
        
        for (int i = 1; i < size; i++) {
            sum[i] = sum[i-1] + nums[i];
        }
    }

    int sumRange(int i, int j) {
        int* &sum = this->sum;
        if (i == 0) {
            return sum[j];
        } else {
            return sum[j] - sum[i-1];
        }
    }
private:
    int *sum;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
