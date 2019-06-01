class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x == 0) {
            return true;
        }
        
        stack<int> s;
        queue<int> q;
        int size = 0;
        while(x > 0) {
            s.push(x%10);
            q.push(x%10);
            x /= 10;
            size++;
        }
        while(s.size() > 0 && (s.size() > size / 2)) {
            if (s.top() != q.front())
                return false;
            s.pop();
            q.pop();
        }
        
        return true;
    }
};
