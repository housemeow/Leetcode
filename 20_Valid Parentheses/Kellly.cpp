class Solution {
public:
    bool isValid(string s) {
        stack<char> pair;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i],
                 top = pair.size() ? pair.top(): '\0';
            if ((ch == ')' && top == '(') ||
                (ch == ']' && top == '[') ||
                (ch == '}' && top == '{')) {
                pair.pop();
            } else {
                pair.push(s[i]);
            }
        }
        
        return pair.size() == 0;
    }
};
