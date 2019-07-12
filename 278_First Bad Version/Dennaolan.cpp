// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l, r;
        int i;
        
        l = 1;
        r = n;
        
        for ( i = l + (r-l)/2 ; l < r ; i = l + (r-l)/2 ) {
            
          if ( r - l == 1 )
            return isBadVersion(l) ? l : r;
            
          if ( isBadVersion(i) )
            r = i;
          else
            l = i;
        }
        
        return i;
    }
};
