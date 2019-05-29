class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> morseStr;
        string tempStr;
        int answer = 0;
        
        string morseTable[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        if ( words.empty() )
            return 0;
        
        for ( int i = 0; i < words.size() ; i++ ) {

          for ( int j = 0 ; j < words.at(i).length() ; j++ ) {
              tempStr.append(morseTable[words.at(i).at(j)-97]);
          } // bulid the morse code string
            
          morseStr.push_back(tempStr);
          tempStr.clear();
        } // for ( build the string list )

        sort( morseStr.begin(), morseStr.end() );
                
        for ( int i = 0 ; i < morseStr.size(); i++ ) {

            if ( i == 0 ) {
              answer++;
              continue;
            } // must have at least one word 
           
            if ( morseStr.at(i).compare( morseStr.at(i-1) ) )
              answer++;
        } // for check the amount of transformations
        
        return answer;
    }
};
