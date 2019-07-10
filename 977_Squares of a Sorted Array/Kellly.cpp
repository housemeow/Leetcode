class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int size = A.size();
        vector<int> array(size);
        int left = 0,
            right = size - 1,
            index = right;

        while (left <= right) {
            if (left == right) {
                array[index--] = A[left] * A[left];
                left++;
            } else if (abs(A[left]) > abs(A[right])) {
                array[index--] = A[left] * A[left];
                left++;
            } else if (abs(A[right]) > abs(A[left])) {
                array[index--] = A[right] * A[right];
                right--;
            } else {
                array[index--] = A[left] * A[left];
                array[index--] = A[right] * A[right];
                left++;
                right--;
            }
        }
        
        return array;
    }
};
