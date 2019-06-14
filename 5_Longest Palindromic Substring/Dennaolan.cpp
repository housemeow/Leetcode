class Solution {
public:
    string longestPalindrome(string s) {
      int l, r;
      bool enter;
      string ans;
        
      for ( int i = 0 ; i < s.size() ; i++ ) {
        enter = false;
        for ( l = i-1, r = i+1 ; l >= 0 && r < s.size() ; l--, r++ ) {
          enter = true;
          if ( s[l] != s[r] )
            break;
        }
          
        l++;
        r--;

        if ( !enter || l == r ) {
          if ( ans.size() == 0 )
            ans = s[i];
        }
        else
          ans = s.substr( l, r-l+1 ).size() > ans.size() ? s.substr( l, r-l+1 ) : ans;
      }
      
      for ( int i = 0 ; i < s.size() ; i++ ) {
        enter = false;
        for ( l = i, r = i+1 ; l >= 0 && r < s.size() ; l--, r++ ) {
          enter = true;
          if ( s[l] != s[r] )
            break;
        }
          
        l++;
        r--;
        
        if ( !enter || l > r ) {
          if ( ans.size() == 0 )
            ans = s[i];
        }
        else
          ans = s.substr( l, r-l+1 ).size() > ans.size() ? s.substr( l, r-l+1 ) : ans;
      }

      return ans;
    }
      
    
private:

};
