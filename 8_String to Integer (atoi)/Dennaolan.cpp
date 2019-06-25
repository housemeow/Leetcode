class Solution {
public:
    int myAtoi(string str) {
      int fix = 0;
      int length;
      long int num = 0;
      string::iterator it;
        
      if ( str.empty() || ( str.size() == 1 && !isdigit( str[0] ) ) )
        return 0;
      
      disspaceAndZero( str );
      if ( checkAndTransNumber( str ) ) {
        
        it = str.begin();
        length = str.size() - 1;
        if ( issign( *it ) ) {
          fix = 1;
          it++;
        }

        if ( str[0] == '-' && outOfSize( str ) )
          return -2147483648;
        else if ( outOfSize( str ) )
          return 2147483647;
  
        for ( ; it != str.end() ; it++ ) {
          if ( issign( *it ) ) {
            continue;
          }
          else {
            num += (*it - 48 ) * pow( 10, length - fix );
            length--;
          }
        }
        
        if ( str[0] == '-' )
          num = num * -1;
      }
      else
        return 0;
      
      if ( num > 0 )
        return num > 2147483647 ? 2147483647 : num;
      else
        return num < -2147483648 ? -2147483648 : num;
    }
    
private:
    
    bool outOfSize( string str ) {
      if ( str.size() > 11 )
        return true;

      if ( issign( str[0] ) && str.size() > 11 )
        return true;
      
      if ( issign( str[0] ) && str.size() < 11 )
        return false;
    
      return false;
    }
    
    void disspaceAndZero( string &str ) {
        for ( ; str.size() > 0 && str[0] == ' ' ; )
          str = str.substr( 1, str.size()-1 );
        
        for ( ; str.size() > 0 && str[0] == '0' ; ) {
          if ( str[0] && !isdigit( str[1]) )
            break;
          str = str.substr( 1, str.size()-1 );
        }
            
        for ( ; str.size() > 0 && ( ( str[0] == '+' || str[0] == '-' ) && str[1] == '0' ) ; ) {
          if ( str[1] && !isdigit( str[2] ) )
            break;
          str = str[0] + str.substr( 2, str.size() - 2 );
        }

    }
    
    bool checkAndTransNumber( string &str ) {
        int index;
        
        if ( ( !isdigit(str[0]) && !issign(str[0]) ) ||
             ( issign(str[0]) && ( str.size() > 1 && !isdigit( str[1] ) ) ) )
          return false;
        
        for ( index = issign( str[0] ) ? 1 : 0 ; index < str.size() ; index++ ) {
          if ( !isdigit(str[index]) )
            break;
        }
        
        str = str.substr( 0, index );
        return true;

    }
    
    bool issign( char ch ) {
      if ( ch == '+' || ch == '-' )
        return true;
      else
        return false;
    }
    
    bool isdigit( char ch ) {
      if ( ch >= 48 && ch <= 57 )
        return true;
      else
        return false;
    }
};
