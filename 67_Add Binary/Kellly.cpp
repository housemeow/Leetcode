class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry = 0;
        
        for (int ai = a.size() - 1, bi = b.size() - 1; ai >= 0 || bi >= 0; ai--, bi--) {
            if (ai >= 0 && bi >= 0) {
                int aValue = a[ai] == '1' ? 1 : 0,
                    bValue = b[bi] == '1' ? 1 : 0,
                    bit = aValue + bValue + carry;
                
                if (bit >= 2) {
                    bit -= 2;
                    carry = 1;
                } else {
                    carry = 0;
                }
                
                ans = (bit == 1 ? '1' : '0') + ans;
            } else if (ai >= 0) {
                int aValue = a[ai] == '1' ? 1 : 0,
                    bit = aValue + carry;
                
                if (bit >= 2) {
                    bit -= 2;
                    carry = 1;
                } else {
                    carry = 0;
                }
                
                ans = (bit == 1 ? '1' : '0') + ans;
            } else {
                int bValue = b[bi] == '1' ? 1 : 0,
                    bit = bValue + carry;
                
                if (bit >= 2) {
                    bit -= 2;
                    carry = 1;
                } else {
                    carry = 0;
                }
                
                ans = (bit == 1 ? '1' : '0') + ans;
            }
        }
        
        if (carry) {
            ans = '1' + ans;
        }
        
        return ans;
    }
};
