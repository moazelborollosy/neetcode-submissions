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
    ListNode* reverseList(ListNode* head) {
        ListNode* slow=NULL;
        ListNode* fast=head->next;
        if(head==NULL){return head;}
        while (fast!=NULL) {
            head->next=slow;
            slow=head;
            head=fast;
            fast=fast->next;
        }
        head->next=slow;

        return head;
    }
};
