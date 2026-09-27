class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int k=0;
        int count[2]={0,0};
        for(int i=0;i<students.size();i++){
            if(students[i]==0){count[0]++;}
            if(students[i]==1){count[1]++;}
        }
        while(k < sandwiches.size()){
            if(sandwiches[k]==1 && count[1]>0){count[1]--; k++;}
            else if(sandwiches[k]==0 && count[0]>0){count[0]--; k++;}
            else if(sandwiches[k]==1 && count[1]==0){break;}
            else if(sandwiches[k]==0 && count[0]==0){break;}
        }

        return count[1]+count[0];
    }
};