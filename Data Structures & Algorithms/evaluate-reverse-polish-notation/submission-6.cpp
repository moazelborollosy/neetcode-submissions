class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (int i = 0; i < tokens.size(); i++) {
            string token = tokens[i];
            
            if (token == "+") {
                int num1 = s.top(); s.pop(); 
                int num2 = s.top(); s.pop(); 
                s.push(num2 + num1);
            } 
            else if (token == "-") {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num2 - num1);
            } 
            else if (token == "*") {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num2 * num1);
            } 
            else if (token == "/") {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num2 / num1);
            } 
            else {
                s.push(stoi(token));
            }
        }
        return s.top();
    }
};
