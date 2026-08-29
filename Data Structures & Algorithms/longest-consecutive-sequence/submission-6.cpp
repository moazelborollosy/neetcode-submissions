class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){return 0;}
        int longest=1;
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i]+1 == nums[i+1]){
                count++;
            }
            else if(nums[i+1]==nums[i]){}
            else if(nums[i]+1 !=nums[i+1] && count>longest){
                longest=count;
                count=1;
            }
            else if(nums[i]+1 !=nums[i+1] && (count<longest || count==longest)){
                count=1;
            }
            if(nums.size()-2 ==i && count>longest){longest=count;}
            
    }
    return longest;
 }
};
