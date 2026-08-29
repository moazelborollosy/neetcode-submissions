class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj;
        int max=0;
        unordered_map<int,int>m;
        sort(nums.begin(),nums.end());
        for(int num:nums){
            m[num]++;
        }
        for(auto const& [key, val] : m){
            if(val>max){max=val; maj=key;}
        }
        return maj;
    }
};