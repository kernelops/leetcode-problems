// Last updated: 6/3/2026, 11:32:42 PM
#include <stack>
class MinStack {
public:
    stack<int> s; stack<int> minStack;
    MinStack() 
    { 
    }
    
    void push(int val) 
    {
        s.push(val);  
        if (minStack.empty() || val<=minStack.top())
            minStack.push(val);
    }
    
    void pop() 
    {
        if (!s.empty()) {
            if (s.top() == minStack.top())
                minStack.pop();
            s.pop();
        }
    }
    
    int top() 
    {
        if(s.empty()) return -1;
        return s.top();    
    }
    
    int getMin() 
    {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */