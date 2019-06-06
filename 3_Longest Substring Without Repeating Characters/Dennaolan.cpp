class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        vector<char> repeatList;
        
        for ( int i = 0 ; i < s.size() ; i++ ) {
          for ( int j = 0 ; j <= i ; j++ ) {
            ans = checkUnique( s.substr( j, s.size() - i ) );
            if ( ans != 0 )
              return ans;
          }
        }
        
        return ans ;
    }

private:

    int checkUnique( string s ) {
      vector<char> repeatList;
          
      for ( int i = 0 ; i < s.size() ; i++ ) {
        if ( isExist( repeatList, s.at(i) ) )
          return 0;
        else
          repeatList.push_back( s.at(i) );
      }

      return s.size();
    }
    
    bool isExist( vector<char> checkList, char key ) {
      vector<char>::iterator it;
      for( it = checkList.begin() ; it != checkList.end() ; it++ ) {
        if ( *it == key )
          return true;
      }

      return false;
    } // bool
    
};
