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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode * temp = dummy;
        
        while(dummy->next!=NULL && dummy->next->next!=NULL){
            ListNode* pre = dummy->next;
            ListNode* cur = pre->next;
            ListNode* nxt = cur->next;
            
            dummy->next = cur;
            cur->next = pre;
            pre->next = nxt;
            
            dummy = pre;
            
        }
        return temp->next;
    }
};