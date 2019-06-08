class Solution {
public:
    string convert(string s, int numRows) {
        string out;
        int size = s.length(),
            round = (numRows - 1) * 2;
        
        if (numRows == 1) {
            return s;
        }

        for (int l = 1; l <= numRows; l++) {
            int lx = l - 1;
            
            if (lx < size) {
                out += s[lx];
                
                int jump = (numRows - l) * 2,
                    nextJump = round - jump;

                while (lx < size) {
                    lx += jump;
                    if (jump != 0 && lx < size) {
                        out += s[lx];
                    }

                    lx += nextJump;
                    if (nextJump != 0 && lx < size) {
                        out += s[lx];
                    }
                }
            }
        }
        
        return out;
    }
};
