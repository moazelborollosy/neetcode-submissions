class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int diff=0;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i+1]<min){min=prices[i+1];}
            else if(prices[i+1]-min > diff){diff=prices[i+1]-min;}

        }
        return diff;
    }
};
