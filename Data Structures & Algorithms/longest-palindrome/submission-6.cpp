class Solution {
public:
    int longestPalindrome(string s) {
        int maxodd=0;
        int res=0;
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        for(auto& [key,val]:m){
            if(val%2 != 0 && val>maxodd){maxodd=val;}
        }
        for(auto& [key,val]:m){
            if((val%2 != 0 && val!=maxodd)){res+=(val-1);}
            else if(val%2 == 0){
                res+=val;
            }
        }
        res+=maxodd;
        return res;
    }
};