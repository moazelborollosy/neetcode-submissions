class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1; char temp;
        for(int i=0;i<s.size()/2;i++){
            temp=s[i];
            s[i]=s[n-i];
            s[n-i]=temp;
        }
        for(char c:s){cout<<c<<" ";}
    }
};