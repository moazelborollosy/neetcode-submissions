/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL &&list2==NULL){return list1;}
        else if(list1==NULL){return list2;}
        else if(list2==NULL){return list1;}
        vector<ListNode*>vec;
        while(list1){vec.push_back(list1); list1=list1->next;}
        while(list2){vec.push_back(list2); list2=list2->next;}
        sort(vec.begin(), vec.end(), [](ListNode* a, ListNode* b) {
            return a->val < b->val;
        });
        
        ListNode*head=vec[0];
        int n=vec.size();
        for(int i=0;i<n-1;i++){
            vec[i]->next=vec[i+1];
        }
        return head;
    }
};
