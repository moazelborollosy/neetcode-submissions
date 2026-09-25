class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size=nums.size();
        int first=-1;int last=-1;
        for(int i=0;i<size;i++){
            if(nums[i]==target && first==-1){first=i;}
            else if(nums[i]==target && first!=-1){last=i;}
        }
        if(first!=-1 && last==-1){last=first;}
        nums.clear();
        nums.push_back(first);
        nums.push_back(last);
        return nums;
    }
};