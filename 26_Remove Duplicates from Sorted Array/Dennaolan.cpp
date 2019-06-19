class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        for ( int i = 0 ; i < nums.size() ; i++ ) {
          if ( nums.size() == 0 || nums.size() == 1 )
            break;
          
          if ( i+1 != nums.size() ) {
            if ( nums[i] == nums[i+1] ) {
              nums.erase( nums.begin() + (i+1) );
              i--;
            } // if ( nums[i] == nums[i+1] )
          } // if ( i+1 != nums.size() )
        } // for i < nums.size()
            
        return nums.size();
    }
};
