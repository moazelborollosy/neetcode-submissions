class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>map;
        vector<int> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        for(int i=1;i<1+nums.size();i++){
            if(!map.count(i)){result.push_back(i);}
        }
        return result;
    }
};