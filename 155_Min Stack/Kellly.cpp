class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> dataStack;
    stack<int> minStack;
    
    MinStack() {
    }
    
    void push(int x) {
        if (minStack.size() == 0) {
            minStack.push(x);
        } else {
            minStack.push(x < minStack.top() ? x : minStack.top());
        }
        dataStack.push(x);
    }
    
    void pop() {
        minStack.pop();
        dataStack.pop();
    }
    
    int top() {
        return dataStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
