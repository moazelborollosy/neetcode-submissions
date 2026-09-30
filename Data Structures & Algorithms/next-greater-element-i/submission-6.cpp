class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(int i=0;i<nums1.size();i++){m[nums1[i]]=i;}
        for(int i=0;i<nums2.size();i++){
            if(m.count(nums2[i])){
                int nextGreater = -1;
                for(int j=i+1;j<nums2.size();j++){
                    if(nums2[j]>nums2[i]){
                        nextGreater = nums2[j];
                        break;
                    }
                }
                nums1[m[nums2[i]]] = nextGreater;
            }
        }
        return nums1;
    }
};