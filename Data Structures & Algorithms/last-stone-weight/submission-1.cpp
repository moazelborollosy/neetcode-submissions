class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int i=stones.size();
        if(i==1){return stones[i-1];}
        sort(stones.begin(),stones.end());
        while(stones[i-1]!=0 &&stones[i-2]!=0){
            stones[i-1]-=stones[i-2];
            stones[i-2]=0;
            sort(stones.begin(),stones.end());
        }
        return stones[i-1];
    }
};
