class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.size() == 0) {
            return digits;
        }
        
        digits[digits.size() - 1]++;
        
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] >= 10) {
                digits[i] -= 10;
                
                if (i > 0) {
                    digits[i - 1]++;
                } else {
                    digits.insert(digits.begin(), 1);
                }
            } else {
                break;
            }
        }
        
        return digits;
    }
};
