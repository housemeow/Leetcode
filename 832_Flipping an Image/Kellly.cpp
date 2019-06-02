class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (int y = 0; y < A.size(); y++) {
            int size = A[y].size();
            for (int x = 0; x <= (size-1) / 2; x++) {
                int temp = A[y][x];
                A[y][x] = !A[y][size - 1 - x];
                A[y][size - 1 - x] = !temp;
            }
        }
        
        return A;
    }
};
