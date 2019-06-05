class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;
        
        for ( int i = 0 ; i < s.size() ; i++ ) {
          switch ( s.at(i) ) {
              case 'M': answer += 1000;
                        break;
              case 'D': answer += 500;
                        break;
              case 'C': answer += 100;
                        if ( i + 1 < s.size() ) {
                          switch ( s.at(i+1) ) {
                              case 'D': answer += 300;
                                        i++;
                                        break;
                              case 'M': answer += 800;
                                        i++;
                                        break;
                              default : answer = answer;
                                        break;
                          }
                        }
                        break;
              case 'L': answer += 50;
                        break;
              case 'X': answer += 10;
                        if ( i + 1 < s.size() ) {
                          switch ( s.at(i+1) ) {
                              case 'L': answer += 30;
                                        i++;
                                        break;
                              case 'C': answer += 80;
                                        i++;
                                        break;
                              default : answer = answer;
                                        break;
                          }
                        }
                        break;
              case 'V': answer += 5;
                        break;
              case 'I': answer += 1;
                        if ( i + 1 < s.size() ) {
                          switch ( s.at(i+1) ) {
                              case 'V': answer += 3;
                                        i++;
                                        break;
                              case 'X': answer += 8;
                                        i++;
                                        break;
                              default : answer = answer;
                                        break;
                          }
                        }
    
                        break;
              default : answer += 0;
                        break;
          }
            
        }
        
        return answer;
    }
};
