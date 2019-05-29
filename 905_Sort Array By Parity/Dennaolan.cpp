class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int temp = 0;
        
        for (int i = 0 ; i < A.size() ; i++) {
            for (int j = i ; j < A.size() ; j++){
                if ( A.at(i)%2 > A.at(j)%2 ) {
                  temp = A.at(i);
                  A[i] = A.at(j);
                  A[j] = temp;
                }
            }
        } 
        
        return A;
    }
};
