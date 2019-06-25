class Solution {
public:
    int maxArea(vector<int>& height) {
        int volume = 0;
        if ( height.size() == 2 )
          return height[0] < height[1] ? height[0] : height[1];
        
        for ( int i = 0 ; i < height.size() ; i++ ) {
          for ( int j = i+1 ; j < height.size() ; j++ ) {
            volume = ( (j-i) * ( height[i] < height[j] ? height[i] : height[j] ) ) > volume ? ( (j-i) * ( height[i] < height[j] ? height[i] : height[j] ) ) : volume;
          }
        }
        
        return volume;
    }
    
};
