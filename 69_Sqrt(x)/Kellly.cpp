class Solution {
public:
    int mySqrt(int x) {
        int start = 1, end = x;
        
        if (x == 0) {
            return 0;
        }
        
        while(start < end) {
            int index;
            if (start % 2 == 0 && end % 2 == 0) {
                index = start / 2 + end / 2;
            } else {
                index = start / 2 + end / 2 + 1;
            }
            double value = x;
            
            if (index <= value / index && (index + 1) > (value / (index + 1))) {
                return index;
            }
            
            if (index > value / index) {
                end = index - 1;
            } else {
                start = index + 1;
            }
        }
        
        return start;
    }
};
