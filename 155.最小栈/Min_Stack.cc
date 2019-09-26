class MinStack {
public:
    stack<int> old_stack;
    stack<int> new_stack;
    
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        old_stack.push(x);
        
        if (new_stack.empty() || new_stack.top() >= x)
            new_stack.push(x);
    }
    
    void pop() {
        if (new_stack.top() == old_stack.top())
            new_stack.pop();
        old_stack.pop();
    }
    
    int top() {
        return old_stack.top();
    }
    
    int getMin() {
        return new_stack.top();
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