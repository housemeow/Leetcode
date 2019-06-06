class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int temp = 0;
        list<char> repeatList;
        
        for ( int i = 0 ; i < s.size() ; i++ ) {
            
          if ( isExist( repeatList, s.at(i) ) ) {
            for ( ; !repeatList.empty() && repeatList.front() != s.at(i) ; repeatList.pop_front() );
            repeatList.pop_front();
          }
            
          repeatList.push_back( s.at(i) );
          ans = ans > repeatList.size() ? ans : repeatList.size()  ;
        }
        
        return ans;
    }

private:
    bool isExist( list<char> checkList, char key ) {
      list<char>::iterator it;
      for( it = checkList.begin() ; it != checkList.end() ; it++ ) {
        if ( *it == key )
          return true;
      }

      return false;
    } // bool
    
};
