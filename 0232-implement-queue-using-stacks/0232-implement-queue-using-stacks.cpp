class MyQueue {
    stack<int> in;
    stack<int> out;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        in = stack<int>();
        out = stack<int>();    
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(out.empty()) {  
            while(!in.empty()) {
                out.push(in.top());
                in.pop();       
            }    
        }  
        int val = out.top();
        out.pop();
        return val;   
    }

    int peek() {
        if(out.empty()) {
 
            while(!in.empty()) {
                out.push(in.top());
                in.pop();     
            }   
        }  
        return out.top();  
    }

    bool empty() {
        
        return out.empty() && in.empty();
        
    }
};