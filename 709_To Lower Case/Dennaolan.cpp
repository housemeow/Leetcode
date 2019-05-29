class Solution {
public:
    string toLowerCase(string str) {
        
        int index = 0;
        
        do {
         
            if ( isupper(str.at(index)) )
              str[index] += 32;
            
            index++; 
            
        } while ( index < str.length() );
        
        return str;
    }
    
};
