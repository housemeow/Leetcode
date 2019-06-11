class Solution {
public:
    string longestPalindrome(string s) {
      string ans;
      if ( s.empty() ) // 字串為空，回傳空字串
        return s;
      
      for ( int i = 0 ; i < s.size() ; i++ ) {
        for ( int j = s.size() - 1 ; j >= i ; j-- ) {

          if ( s.at(i) != s.at(j) || checkRepeat( s.substr(i,j-i+1) ) ) // 條件不符( 頭尾不同 || 字串內有多個奇數字符 )，跳過這輪驗證
            continue;
          else if ( j-i < ans.size() ) // 要檢查的內容比已知的答案還短，跳過這一組
            break;
          else if ( i == j ) { // 觸底，如果還沒找到答案的話，回傳該字符
            if ( ans.size() == 0 )
              return s.at(i);
          }
            
          if ( ( j - i ) % 2 == 0 ) { // 檢查的長度為偶數
            if ( s.substr( i, (j-i)/2 ) == reverse( s.substr( i+(j-i)/2+1 , (j-i)/2 ) ) )
              ans = ans.size() > s.substr( i, j-i+1 ).size() ? ans : s.substr( i, j-i+1 ) ;
          } // if 檢查的長度為偶數
          else { // 檢查的長度為奇數
            if ( s.substr( i, (j-i+1)/2 ) == reverse( s.substr( i+(j-i)/2+1, (j-i+1)/2 ) ) )
              ans = ans.size() > s.substr( i, j-i+1 ).size() ? ans : s.substr( i, j-i+1 ) ;
          } // else 檢查的長度為奇數

        } // for j
      } // i
        
      return ans;
    }
    
private:

    string reverse( string s ) {
      string ans;
      for ( int i = 0 ; i < s.size() ; i++ )
        ans += s[(s.size()-1)-i];
        
      return ans;
    }
    
    bool checkRepeat( string s ) {
      int checkList[256];
      bool check;
      
      if ( s.size() == 1 )
        return false;
        
      for ( int i = 0 ; i < 256 ; i++ )
        checkList[i] = 0;
        
      for ( int i = 0 ; i < s.size() ; i++ )
        checkList[s.at(i)]++;
    
      check = false;
      for ( int i = 0 ; i < 256 ; i++ ) {
        if ( checkList[i] % 2 != 0 ) {
          check = !check;
          if ( !check )
            return true;
        } 
      }
      
      if ( check && ( s.size() % 2 == 0 || ( ( findPosition( checkList , s ) != s.size() / 2 ) && !same( checkList ) ) ) )
        return true;

      return false;
    }

    bool same( int checkList[256] ) {
      bool check;
        
      check = false;        
      for ( int i = 0 ; i < 256 ; i++ ) {
        if( checkList[i] != 0 ) {
          check = !check;
          if ( !check )
            return false;
        }
      }
        
      return true;
    }
          
    int findPosition( int checkList[256], string s ) {
      int addr;
      char ch;
        
      addr = 0;
      for ( int i = 0 ; i < 256 ; i++ ) {
        if ( checkList[i] % 2 != 0 ) {
          ch = i;
          for ( int j = 0 ; j < s.size() ; j++ ) {
            if ( s[j] == ch ) {
              addr = j;
              if ( addr == s.size() / 2 )
                return addr;
            }
          }
        }

      }
        
      return 0;
    }
};
