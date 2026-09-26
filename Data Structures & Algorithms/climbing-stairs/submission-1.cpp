class Solution {
public:
    int climbStairs(int n) {
        int old;
        int neww;
        if(n==1)return 1; 
        if(n==2)return 2;
        else{
            old=1;
            neww=2;
            for(int i=2;i<n;i++){
                int temp=old;
                old=neww;
                neww+=temp;
            }
        }
        return neww;
    }
};
