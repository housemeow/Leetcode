class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        
        while (n) {
            count += n / 5;
            
            n/=5;
        }
        
        return count;
        /*
        1
        2
        3
        4
        5.(5)
        6
        7
        8
        9
        10 (5)
        11
        12
        13
        14
        15 (5)
        16
        17
        18
        19
        20 (5)
        21
        22
        23
        24
        25 (5*5)
        26
        27
        28
        29
        30 (5)
        
        50 (5*5)
        
        75 (5*5)
        
        100 (5*5)
        
        125 (5*5*5)
        
        
        */
    }
};
