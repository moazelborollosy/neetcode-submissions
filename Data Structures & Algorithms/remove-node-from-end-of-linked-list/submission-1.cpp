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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* sub=head;
        ListNode* temp=head;
        while(temp!=NULL){temp=temp->next; size++;}
        if(size==1 && n==1){return NULL;}
        else{
        int idx=size-n;
        if(idx==0 && size>1){head=head->next;}
        else{
            for(int i=0;i<idx-1 ;i++){
                sub=sub->next;
            }
            sub->next=sub->next->next;
            }
            }
     return head;
    }
};
