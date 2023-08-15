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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ans = new ListNode(0);
        ListNode* gre = new ListNode(0);
        ListNode* k = gre;
        ListNode* temp = ans;
        ListNode* cur = head;
        while(cur!=NULL){
            if(cur->val<x){
                temp->next = cur;
                temp = temp->next;
            }
            else{
               k->next = cur; 
               k = k->next;
            }
            cur = cur->next;
        }
        k->next=NULL;
        temp->next = gre->next;
        
        
        return ans->next;
    }
};