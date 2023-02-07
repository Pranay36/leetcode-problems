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
        ListNode* temp = list1;
        ListNode* cur = list2;
        
        ListNode* head = new ListNode(-1);
        ListNode* h= head;
        while(temp!=NULL && cur!=NULL){
            if(temp->val<=cur->val){
                head->next = temp;
                temp=temp->next;
            }
            else{
                head->next = cur;
                cur=cur->next;
            }
            head = head->next;
            
        }
        while(temp!=NULL){
            head->next = temp;
            temp = temp->next;
            head = head->next;
        }
        while(cur!=NULL){
            head->next = cur;
            cur = cur->next;
            head = head->next;
        }
        return h->next;
        
    }
};