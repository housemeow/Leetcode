class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ansList;
        vector<int> ans;
        vector<int> ansCheck;
        
        if ( nums.empty() || nums.size() < 3 )
          return ansList;
        
        for ( int i = 0 ; i < nums.size() ; i++ ) {
          if ( i+2 <= nums.size() )
            ans.push_back(nums[i]);
          else
            break;
            
          for ( int j = i+1 ; j < nums.size() ; j++ ) {
            if ( j+1 <= nums.size() )
              ans.push_back(nums[j]);
            else {
              nums.pop_back();
              break;
            }
              
            for ( int k = j+1 ; k < nums.size() ; k++ ) {
              if ( ans[0] + ans[1] + nums[k] == 0 ) {
                ans.push_back(nums[k]);
                ansCheck = ans;
                sort( ansCheck.begin(), ansCheck.end() );
                if ( notDuplicate( ansList, ansCheck ) )
                  ansList.push_back(ansCheck);
                ans.pop_back();
              }
            }
              
            ans.pop_back();
          }
            
          ans.pop_back();
        }
        
        return ansList;
    }

private:
    
    bool notDuplicate( vector<vector<int>> ansList, vector<int>ans ) {
        for ( int i = 0 ; i < ansList.size() ; i++ ) {
          if ( ansList[i] == ans )
            return false;
        }
        return true;
    }
};
