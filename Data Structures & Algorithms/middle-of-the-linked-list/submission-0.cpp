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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        int idx=0;
        ListNode* temp=head;
        ListNode* sub=head;
        while(temp!=NULL){temp=temp->next; n++;}
        if(n%2==0){
            n=(n/2);
        }
        else{n=(n/2);}
        while(idx!=n){
            if(idx<n){head=head->next; idx++;}
        }
        return head;
    }
};