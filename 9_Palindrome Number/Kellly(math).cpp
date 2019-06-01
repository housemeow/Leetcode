class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x > 0))
            return false;
        int value = 0;
        
        while (x > value) {
            value = (value * 10) + x % 10;
            x /= 10;
        }
        
        return x == value || x == value / 10;
    }
};
