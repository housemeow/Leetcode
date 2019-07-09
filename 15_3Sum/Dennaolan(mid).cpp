class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ansList;
        vector<int> ans;
        bool signal_l, signal_r;
        int prev_l,prev_r;
        int l, r;
        
        sort( nums.begin(), nums.end() );
        
        l = 0;
        r = nums.size()-1;
        signal_l = OFF;
        signal_r = OFF;

        for ( int i = l+1 ; i < r ; i++ ) {

          signal_l = OFF;
          signal_r = OFF;
            
          for ( ; l < i && r > i; ) {
             
            if ( signal_r && nums[r] == prev_r ) {
              r--;
              continue;
            }
            if ( signal_l && nums[l] == prev_l ) {
              l++;
              continue;
            }
              
            signal_l = OFF;
            signal_r = OFF;
              
            if ( nums[l] + nums[r] + nums[i] == 0 ) {
              ans.push_back(nums[l]);
              ans.push_back(nums[i]);
              ans.push_back(nums[r]);
              if ( notDuplicate( ansList, ans) )
                ansList.push_back( ans );
              ans.clear();
            }
            else if ( ( nums[l] < 0 && nums[i] < 0 && nums[r] < 0 ) ||
                      ( nums[l] > 0 && nums[i] > 0 && nums[r] > 0 ) )
              break;

            prev_l = nums[l];
            prev_r = nums[r];
              
            if ( nums[r] + nums[l] + nums[i] >= 0 ) {
              r--;
              signal_r = ON;
            }
            else {
              l++;
              signal_l = ON;
            }
          }
          
          l = 0;
          r = nums.size()-1;
        }
        
        return ansList;
    }

private:
    
    bool ON = true;
    bool OFF = false;
  
    bool notDuplicate( vector<vector<int>> ansList, vector<int>ans ) {
        for ( int i = 0 ; i < ansList.size() ; i++ ) {
          if ( ansList[i] == ans )
            return false;
        }
        return true;
    }
};
