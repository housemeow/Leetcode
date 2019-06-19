class Solution {
public:
    string convert(string s, int numRows) {

        string result;
        int cursor = 1;
        bool on_off = true;

        if ( numRows == 1 )
          return s;

        if ( s.empty() )
          return result;

        int pos[s.size()];
        
        for ( int i = 0 ; i < s.size() ; i++ ) {

          pos[i] = cursor;
            
          if ( cursor == 1 && !on_off )
            on_off = true;
            
          if ( cursor < numRows )
            cursor += on_off ? 1 : -1;
          else if ( cursor == numRows ) {
            cursor--;
            on_off = false;
          }

        }
        
        for ( int i = 1 ; i <= numRows ; i++ ) {
          for ( int j = 0 ; j < s.size() ; j++ ) {
              if ( pos[j] == i )
                result += s[j];
          }
        }
        
        return result;
    }
};
