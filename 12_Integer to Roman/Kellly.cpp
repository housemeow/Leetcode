class Solution {
public:
    string roman[4][10] = {
        { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
        { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
        { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" },
        { "", "M", "MM", "MMM" },
    };
    
    string intToRoman(int num) {
        int ten = 0;
        string s;
        while (num > 0) {
            s = roman[ten][num % 10] + s;
            
            ten++;
            num /= 10;
        }
        
        return s;
    }
};
