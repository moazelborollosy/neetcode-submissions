class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int idx1=0; int idx2=n-1;
        for(int i=0;i<n-1;i++){
            if(numbers[idx1]+numbers[idx2]==target){
                numbers.clear();
                idx1++; idx2++;
                numbers.push_back(idx1); numbers.push_back(idx2);
                break;
            }
            else if(numbers[idx1]+numbers[idx2]>target){idx2--;}
            else{idx1++;}
        }

        return numbers;
    }
};
