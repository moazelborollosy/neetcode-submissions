class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int idx;
        int zeros=0;
        int mult=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){zeros++;}
            else{
                mult*=nums[i];
            }
        }
        if(zeros>1){
            for(int i=0;i<nums.size();i++){nums[i]=0;}
        }
        else{
            if(zeros==0){
                for(int i=0;i<nums.size();i++){
                    nums[i]=mult/nums[i];
                }
            }
            if(zeros==1){
               for(int i=0;i<nums.size();i++){
                    if(nums[i]==0){idx=i;}
                    if(nums[i]!=0){nums[i]=0;}
                } 
                nums[idx]=mult;
            }
        }
     return nums;
    }
};
