class Solution {
public:
    string countAndSay(int n) {
      string str = "1";
      string new_str;
      char ch;
      int count;

      new_str = "";
      count = 0;
      for ( int i = 1 ; i < n ; i++ ) {
        for ( int j = 0, ch = str[0] ; j < str.size() ; j++ ) {
          if ( ch == str[j] )
            count++;
          else {
            new_str += std::to_string(count);
            new_str += ch;
            ch = str[j];
            count = 1;
          }
            
          if ( j == str.size() - 1 ) {
            new_str += std::to_string(count);
            new_str += ch;
          }
        }
        
        str = new_str;
        new_str = "";
        count = 0;
      }
      return str;
    }
};
