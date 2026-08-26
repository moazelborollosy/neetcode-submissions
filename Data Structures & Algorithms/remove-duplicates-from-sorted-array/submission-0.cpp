class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        if(!nums.empty()) temp.push_back(nums[0]);
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]!=nums[i]) temp.push_back(nums[i+1]);
        }
        nums=temp;
        return temp.size() ;
    }
};