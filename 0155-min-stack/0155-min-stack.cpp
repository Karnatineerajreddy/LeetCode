class MinStack {
public:

    stack<long long> st; 
    int minVal;

    MinStack() {
        minVal = INT_MAX;
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minVal = val;
        } else {
            if (val >= minVal) {
                st.push(val);
            } else {
               
                st.push((long long)2 * val - minVal);
                minVal = val;
            }
        }
    }
    
    void pop() {
        if (st.empty()) return;
        
        long long topVal = st.top();
        st.pop();
        
        if (topVal < minVal) {
           
            minVal = (int)(2LL * minVal - topVal);
        }

        
        if (st.empty()) {
            minVal = INT_MAX;
        }
    }
    
    int top() {
        if (st.empty()) throw runtime_error("Stack is empty");
        
        long long topVal = st.top();
        return (topVal >= minVal) ? (int)topVal : minVal;
    }
    
    int getMin() {
        if (st.empty()) throw runtime_error("Stack is empty");
        return minVal;
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