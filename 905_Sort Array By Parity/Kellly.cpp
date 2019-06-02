class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int even = 0,
            odd = A.size() - 1;

        while (even < odd && odd >= 0 && even < A.size()) {
            if (A[even] % 2 == 1 && A[odd] % 2 == 0) {
                int temp = A[even];
                A[even] = A[odd];
                A[odd] = temp;
            }
            
            if (A[even] % 2 == 0) {
                even++;
            }
        
            if (A[odd] % 2 == 1) {
                odd--;
            }
        }
        
        return A;
    }
};
