class Solution {
public:
    int reverse(int x) {
      long int answer = 0;
      string str;
      stringstream ss;
      ss << x;
      str = ss.str();

      for ( int i = x >= 0 ? 0 : 1 ; i < str.size() ; i++ )
        answer = x >= 0 ?
          answer + ( ( (long int)str.at( str.size() - ( i + 1 ) ) - 48 ) * pow( 10, str.size() - ( i + 1 ) ) )
          :
          answer + ( ( (long int)str.at( str.size() - ( i ) ) - 48 ) * pow( 10, str.size() - ( i + 1 ) ) );
                          
     return answer < 2147483648 ? ( x >= 0 ? answer : -answer ) : 0 ;
    }
};
