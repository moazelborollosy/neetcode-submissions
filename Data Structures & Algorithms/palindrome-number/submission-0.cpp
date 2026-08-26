class Solution {
public:
    bool isPalindrome(int x) {
        int i=0;
        stack<char>stk;
        string s=to_string(x);
        for(int i=0;i<s.size();i++){stk.push(s[i]);}
        while(!stk.empty()){
            if(stk.top()==s[i]){stk.pop(); i++;}
            else{return false;}
        }
        return true;
    }
};