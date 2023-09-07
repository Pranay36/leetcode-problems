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
    
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* cur=head;
        ListNode* prev = NULL;
        ListNode* nxt = head;
        
        while(cur!=NULL){
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur= nxt;
        }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *dummy = new ListNode(0), *pre = dummy, *cur;
       dummy -> next = head;
       for (int i = 0; i < m - 1; i++) {
           pre = pre -> next;
       }
       cur = pre -> next;
       ListNode* nxt = cur; 
       for (int i = 0; i < n - m; i++) {
          
           ListNode *forw = cur->next; // forw pointer will be after curr
            cur->next = forw->next;
            forw->next = pre->next;
            pre->next = forw;
       }
       return dummy -> next;
    }
};