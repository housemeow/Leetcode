class Solution {
public:
    int reverse(int x) {
        long long int value = 0;
        while (x != 0) {
            // 2^32 = 2147483648
            if (value > 0) {
                if (value > 214748364 || (value == 214748364 && x % 10 > 8)) {
                    return 0;
                }
            } else if (value < 0) {
                if (value < -214748364 || (value == 214748364 && x % 10 < -7)) {
                    return 0;
                }
            }
            value *= 10;
            value += x % 10;
            x /= 10;
        }
        return value;
    }
};
