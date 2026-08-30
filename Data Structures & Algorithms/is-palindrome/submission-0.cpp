class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        stack<char>stk;
        string clean;
        for(char c : s){
            if(isalnum(c)){
                stk.push(tolower(c));
                clean +=tolower(c);
             }
            }
        while(!stk.empty()){
            if(tolower(clean[i]) == stk.top()){i++; stk.pop();}
            else{return false;}      
        }
        return true;
    }
};
