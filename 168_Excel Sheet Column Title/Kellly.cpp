class Solution {
public:
    string convertToTitle(int n) {
        string s;
        
        
        do {
            n--;
            char ch = n % 26 + 'A';
            s = ch + s;
            n /= 26;
        } while (n);
        
        return s;
    }
};

/*
1 => 0 => A (0 % 26 = 0)
26 => 25 => Z (25 % 26 = 25)
27 => 26 => AA (26 % 26 = 0)



*/
