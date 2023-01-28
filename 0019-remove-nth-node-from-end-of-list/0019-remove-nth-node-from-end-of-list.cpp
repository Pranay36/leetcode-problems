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
        ListNode* temp = new ListNode();
        temp->next= head;
        int x=n;
        ListNode* slow=temp;
        ListNode* fast=temp;
       while(x!=0){
           fast=fast->next;
           x--;
       }
        // if(fast->next==NULL){
        //     head = head->next;
        //     return head;
        // }
        
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        ListNode*dum  = slow->next;
        slow->next=slow->next->next;
        delete dum;
        return temp->next;
    }
};