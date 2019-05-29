class Solution {
public:
    string removeOuterParentheses(string S) {
        
        int count = 0;
        int index = 0;
        
        for ( int i = 0 ; i < S.length() ; i++ ) {

          if ( S.at(i) == '(' ) {

            if ( count == 0 ) // First parathese
              index = i;
    
            count++;

          } // if ( '(' come )
          else if ( S.at(i) == ')' ) {

            count--;
            if ( count == 0 ) {
                
              S.erase(i,1);
              S.erase(index,1);
              i-=2;
                
            } // if found a pair of paratheses

          } // if ( ')' come )

        } // for ( processing string )

        return S;
    }
};
