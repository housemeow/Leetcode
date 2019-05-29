class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
      int count = 0;  
        
      for ( int i = 0 ; i < S.length() ; i++ ) {
        for ( int j = 0 ; j < J.length() ; j++ ) {
            if ( S.at(i) == J.at(j) ) {
              count++;
              break; // found the character inside -> stop this loop
            } // if found
        } //  for ( check string S's content is contaning in string J )
          
      } // for ( confirm string S's content )
        
      return count;
        
    }
};
