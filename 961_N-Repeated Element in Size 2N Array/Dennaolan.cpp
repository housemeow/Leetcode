class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        if ( A.size() == 1 )
            return A.at(0);
        
        sort( A.begin(), A.end() );
        for( int i = 0 ; i < A.size()-1 ; i++ ) {
            if ( A.at(i) == A.at(i+1) )
              return A.at(i);
        }
                
        return 0;
    }
};
