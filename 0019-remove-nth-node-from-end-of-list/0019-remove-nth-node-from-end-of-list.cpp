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
        int x=n;
        ListNode* temp = new ListNode(0);
        temp->next=head;
        ListNode* fast =temp;
        ListNode* slow = temp;
        while(x!=0){
           fast=fast->next;
           x--;
       }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next =slow->next->next;
        return temp->next;
    }
};