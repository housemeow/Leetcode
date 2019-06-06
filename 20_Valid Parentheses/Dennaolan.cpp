class Solution {
public:
    bool isValid(string s) {
        stack<char> checkList;
        char test;
        for ( int i = 0 ; i < s.size() ; i++ ) {
          if ( s.at(i) == '(' || s.at(i) == '[' || s.at(i) == '{' )
            checkList.push( s.at(i) );
          else {
            if ( !checkList.empty() ) {
              if ( s.at(i) == ')' && checkList.top() != '(' )
                return false;
              else if ( s.at(i) == ']' && checkList.top() != '[' )
                return false;
              else if ( s.at(i) == '}' && checkList.top() != '{' )
                return false;
              
              checkList.pop();
            }
            else
              return false;
          }
        }
        
        return checkList.empty() ? true : false;
    }
};
