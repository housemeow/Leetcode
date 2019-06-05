class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int length = 99999;
        char temp;
        string str;
        
        for ( int i = 0 ; i < strs.size() ; i++ )
          length = length > strs.at(i).size() ? strs.at(i).size() : length;
        
        length = strs.size() == 0 ? 0 : length;
        
        for ( int i = 0 ; i < length ; i++ ) {
          temp = strs.at(0).at(i);
          for ( int j = 0 ; j < strs.size() ; j++ ) {
            if ( temp != strs.at(j).at(i) ) {
              if ( i == 0 )
                return "";
              else
                return str;
            } // if
          } // for
          
          str += temp;
        } // for
        
        return str;
    }
};
