class Solution {
public:
    int romanToInt(string s) {
        int value = 0;
        bool C, X, I;
        C = X = I = false;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'M') { // 1000
                if (C) {
                    value += 800;
                } else {
                    value += 1000;
                }
            } else if (s[i] == 'D') { // 500
                if (C) {
                    value += 300;
                } else {
                    value += 500;
                }
            } else if (s[i] == 'C') { // 100
                C = true;
                if (X) {
                    value += 80;
                } else {
                    value += 100;
                }
            } else if (s[i] == 'L') { // 50
                if (X) {
                    value += 30;
                } else {
                    value += 50;
                }
            } else if (s[i] == 'X') { // 10
                X = true;
                if (I) {
                    value += 8;
                } else {
                    value += 10;
                }
            } else if (s[i] == 'V') { // 5
                if (I) {
                    value += 3;
                } else {
                    value += 5;
                }
            } else if (s[i] == 'I') { // 1
                I = true;
                value += 1;
            }
        }
    
        return value;
    }
};
