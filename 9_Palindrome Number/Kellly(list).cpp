class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else if (x == 0) {
            return true;
        }
        
        list<int> l;
        while(x > 0) {
            l.push_back(x%10);
            x /= 10;
        }
        while(l.size() > 0) {
            if (l.back() != l.front())
                return false;
            l.pop_back();
            if (l.size() > 0)
                l.pop_front();
        }
        
        return true;
    }
};
