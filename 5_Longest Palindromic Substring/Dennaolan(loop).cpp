class Solution {
public:
    string longestPalindrome(string s) {
      string ans;
      if ( s.empty() )
        return ans;
      
      for ( int i = 0 ; i < s.size() ; i++ ) {
        for ( int j = s.size() - 1 ; j >= i ; j-- ) {
          if ( s.at(i) != s.at(j) )
            continue;
          else if ( i == j ) {
            if ( ans.size() == 0 )
              ans = s.at(i);
          }
            
          if ( ( j - i ) % 2 == 0 ) {
            if ( s.substr( i, (j-i)/2 ) == reverse( s.substr( i+(j-i)/2+1 , (j-i)/2 ) ) )
              ans = ans.size() > s.substr( i, j-i+1 ).size() ? ans : s.substr( i, j-i+1 ) ;
          }
          else {
            if ( s.substr( i, (j-i+1)/2 ) == reverse( s.substr( i+(j-i)/2+1, (j-i+1)/2 ) ) )
              ans = ans.size() > s.substr( i, j-i+1 ).size() ? ans : s.substr( i, j-i+1 ) ;
          }
        }
      }
        
      return ans;
    }
    
private:

    string reverse( string s ) {
      string ans;
      for ( int i = 0 ; i < s.size() ; i++ )
        ans += s[(s.size()-1)-i];
        
      return ans;
    }
};
