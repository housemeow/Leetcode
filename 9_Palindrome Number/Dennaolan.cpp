class Solution {
public:
    bool isPalindrome(int x) {
      if ( x < 0 )
        return false;
      
      string str1, str2;
      stringstream ss;
      ss << x;
      str1 = ss.str();
      str2 = str1;
      reverse(str1.begin(),str1.end());  
        
      return ( str1 == str2 ) ? true : false;
    }
};
