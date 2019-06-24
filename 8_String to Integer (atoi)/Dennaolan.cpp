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

        if ( str[0] == '-' && outOfRange( str ) )
          return -2147483648;
        else if ( outOfRange( str ) )
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
    
    bool outOfRange( string str ) {
      if ( str.size() > 11 )
        return true;

      if ( issign( str[0] ) && str.size() > 11 )
        return true;
      
      if ( issign( str[0] ) && str.size() < 11 )
        return false;
        
      if ( issign( str[0] ) && str.size() == 11 ) {
        if ( str[0] == '-' ) {
          if ( str[1] > '2' )
            return true;
          else if ( str[1] == '2' ) {
            if ( str[2] > '1' )
              return true;
            else if (str[2] == '1' ) {
              if ( str[3] > '4' )
                return true;
              else if ( str[3] == '4' ) {
                if ( str[4] > '7' )
                  return true;
                else if ( str[4] == '7' ) {
                  if ( str[5] > '4' )
                    return true;
                  else if ( str[5] == '4' ) {
                    if ( str[6] > '8' )
                      return true;
                    else if ( str[6] == '8' ) {
                      if ( str[7] > '3' )
                        return true;
                      else if ( str[7] == '3' ) {
                        if ( str[8] > '6' )
                          return true;
                        else if ( str[8] == '6' ) {
                          if ( str[9] > '4' )
                            return true;
                          else if ( str[9] == '4' ) {
                            if ( str[10] > '8' )
                              return true;
                            else
                              return false;
                          }
                          else
                            return false;
                        }
                        else
                          return false;
                      }
                      else
                        return false;
                    }
                    else
                      return false;
                  }
                  else
                    return false;
                  }
                else
                  return false;
              }
              else
                return false;
            }
            else
              return false;
          }
          else
            return false;
        }
        else if ( str[0] == '+') {
          if ( str[1] > '2' )
            return true;
          else if ( str[1] == '2' ) {
            if ( str[2] > '1' )
              return true;
            else if (str[2] == '1' ) {
              if ( str[3] > '4' )
                return true;
              else if ( str[3] == '4' ) {
                if ( str[4] > '7' )
                  return true;
                else if ( str[4] == '7' ) {
                  if ( str[5] > '4' )
                    return true;
                  else if ( str[5] == '4' ) {
                    if ( str[6] > '8' )
                      return true;
                    else if ( str[6] == '8' ) {
                      if ( str[7] > '3' )
                        return true;
                      else if ( str[7] == '3' ) {
                        if ( str[8] > '6' )
                          return true;
                        else if ( str[8] == '6' ) {
                          if ( str[9] > '4' )
                            return true;
                          else if ( str[9] == '4' ) {
                            if ( str[10] > '7' )
                              return true;
                            else
                              return false;
                          }
                          else
                            return false;
                        }
                        else
                          return false;
                      }
                      else
                        return false;
                    }
                    else
                      return false;
                  }
                  else
                    return false;
                  }
                else
                  return false;
              }
              else
                return false;
            }
            else
              return false;
          }
          else
            return false;
        }
      }
      else if ( !issign( str[0] ) && str.size() == 10 ) {
          if ( str[0] > '2' )
            return true;
          else if ( str[0] == '2' ) {
            if ( str[1] > '1' )
              return true;
            else if (str[1] == '1' ) {
              if ( str[2] > '4' )
                return true;
              else if ( str[2] == '4' ) {
                if ( str[3] > '7' )
                  return true;
                else if ( str[3] == '7' ) {
                  if ( str[4] > '4' )
                    return true;
                  else if ( str[4] == '4' ) {
                    if ( str[5] > '8' )
                      return true;
                    else if ( str[5] == '8' ) {
                      if ( str[6] > '3' )
                        return true;
                      else if ( str[6] == '3' ) {
                        if ( str[7] > '6' )
                          return true;
                        else if ( str[7] == '6' ) {
                          if ( str[8] > '4' )
                            return true;
                          else if ( str[8] == '4' ) {
                            if ( str[9] > '7' )
                              return true;
                            else
                              return false;
                          }
                          else
                            return false;
                        }
                        else
                          return false;
                      }
                      else
                        return false;
                    }
                    else
                      return false;
                  }
                  else
                    return false;
                  }
                else
                  return false;
              }
              else
                return false;
            }
            else
              return false;
          }
          else
            return false;
        }
    
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
