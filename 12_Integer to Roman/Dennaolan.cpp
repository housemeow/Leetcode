class Solution {
public:
    string intToRoman(int num) {
        string str;
        
        for ( ; num != 0 ; ) {
            if ( num / M != 0 ) {
              num = num - M;
              str += "M";
            }
            else if ( num / CM != 0 ) {
              num = num - CM;
              str += "CM"; 
            }
            else if ( num / D != 0 ) {
              num = num - D;
              str += "D";
            }
            else if ( num / CD != 0 ) {
              num = num - CD;
              str += "CD";
            }
            else if ( num / C != 0 ) {
              num = num - C;
              str += "C";
            }
            else if ( num / XC != 0 ) {
              num = num - XC;
              str += "XC";
            }
            else if ( num / L != 0 ) {
              num = num - L;
              str += "L";
            }
            else if ( num / XL != 0 ) {
              num = num - XL;
              str += "XL";
            }
            else if ( num / X != 0 ) {
              num = num - X;
              str += "X";
            }
            else if ( num / IX != 0 ) {
              num = num - IX;
              str += "IX";
            }
            else if ( num / V != 0 ) {
              num = num - V;
              str += "V";
            }
            else if ( num / IV != 0 ) {
              num = num - IV;
              str += "IV";
            }
            else {
              for ( int i = 0 ; i < num ; i++ )
                str += "I";
              num = 0;
            }
        }
        
        return str;
    }
    
private:
    int M = 1000;
    int CM = 900;
    int D = 500;
    int CD = 400;
    int C = 100;
    int XC = 90;
    int L = 50;
    int XL = 40;
    int X = 10;
    int IX = 9;
    int V = 5;
    int IV = 4;
    int I = 1;

};
