class MinStack {
public:
    stack<int> s, helper;
    
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        //only add if normal stacks top element is smaller than helpers top
        if(helper.empty() || val <= helper.top()) {
            helper.push(val);
        }
    }
    
    void pop() {

        int x = s.top();
        s.pop();

        if(x == helper.top()) {
            helper.pop();
        }
        
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return helper.top();
    }
};
