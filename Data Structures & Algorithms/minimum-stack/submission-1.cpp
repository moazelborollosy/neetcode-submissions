class MinStack {
public:
    int Top;
    vector<int>stack;
    MinStack() {
        Top=-1;
    }
    
    void push(int val) {
        stack.push_back(val);
        Top++;
    }
    
    void pop() {
        if(Top==-1){return ;}
        else{
            stack.erase(stack.begin() + Top);
            Top--;
        }
    }
    
    int top() {
        if(Top==-1){return -1;}
        return stack[Top];
    }
    
    int getMin() {
        int min=stack[0];
        for(int i=0;i<stack.size()-1;i++){
            if(min>stack[i+1])min=stack[i+1];
        }
        return min;
    }
};
