class Solution {
public:
    string longestPalindrome(string s) {
      string ans;
      if ( s.empty() )
        return ans;
      
      return palindromic( s );
    }
    
private:
    string palindromic( string s ) {
        string ans;
        
        if ( s == reverse( s ) )
          return s;
        else {
          ans = ans.size() < palindromic( s.substr( 0, s.size()-1 ) ).size() ? palindromic( s.substr( 0, s.size()-1 ) ) : ans ;
          ans = ans.size() < palindromic( s.substr( 1, s.size()-1 ) ).size() ? palindromic( s.substr( 1, s.size()-1 ) ) : ans ;
        }
        
        return ans;
    }

    string reverse( string s ) {
      string ans;
      for ( int i = 0 ; i < s.size() ; i++ )
        ans += s[(s.size()-1)-i];
        
      return ans;
    }
};
