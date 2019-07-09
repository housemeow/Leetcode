class Solution {
public:
    string countAndSay(int n) {
        string str = "1";
        for (int i = 2; i <= n; i++) {
            str = nextSay(str);
        }
        
        return str;
    }
    
    string nextSay(string str) {
        string next;
        char ch = str[0];
        int count = 1;
        int index = 1;
        
        while (index < str.size()) {
            if (ch == str[index]) {
                count++;
            } else {
                next += to_string(count);
                next += ch;
                ch = str[index];
                count = 1;
            }
            
            index++;
        }
        
        next += to_string(count);
        next += ch;
        
        return next;
    }
};
