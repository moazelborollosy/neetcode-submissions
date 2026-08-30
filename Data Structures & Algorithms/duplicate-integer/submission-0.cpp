class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int num:nums){m[num]++;}
        for(auto& [key,val]:m){if(val>1){return true;}}
        return false;
    }
};