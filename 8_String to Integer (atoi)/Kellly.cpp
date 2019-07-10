class Solution {
public:
    int myAtoi(string str) {
        const int MIN = -2147483648,
                  MAX = 2147483647;
   
        int start = -1,
            numberLength;

        bool negative = false;

        for (int i = 0; i < str.size(); i++) {
            char ch = str[i];

            if (start == -1) {
                if (ch == ' ') {
                    continue;
                } else if (ch == '-') {
                    start = i + 1;
                    negative = true;
                    numberLength = 0;
                } else if (ch == '+') {
                    start = i + 1;
                    numberLength = 0;
                } else if ('0' <= ch && ch <= '9' ) {
                    start = i;
                    numberLength = 1;
                } else{
                    return 0;
                }
            } else {
                if ('0' <= ch && ch <= '9') {
                    numberLength++;
                } else {
                    break;
                }
            }
        }
        
        if (start == -1 || numberLength == 0) {
            return 0;
        }

        int value = 0;
        if (negative) {
            for (int i = start; i < start + numberLength; i++) {
                int num = str[i] - '0';

                if (i == start) {
                    value = -num;
                } else if (value == MIN / 10 && num > 8 || value < MIN / 10) {
                    return MIN;
                } else {
                    value = value * 10 - num;
                }
            }
        } else {
            for (int i = start; i < start + numberLength; i++) {
                int num = str[i] - '0';

                if (value == MAX / 10 && num > 7 || value > MAX / 10) {
                    return MAX;
                } else {
                    value = value * 10 + num;
                }
            }
        }
        return value;
    }
};
