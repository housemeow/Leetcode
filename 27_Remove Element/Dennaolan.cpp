class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int temp;
        
        if ( nums.size() == 0 )
          return 0;
        
        for ( int i = 0 ; i < nums.size() ; i++ ) {
          if ( nums[i] == val ) {
              temp = nums[nums.size()-1];
              nums[nums.size()-1] = nums[i];
              nums[i] = temp;
              nums.pop_back();
              i--;
          }
        }
        
        return nums.size();
    }
};
