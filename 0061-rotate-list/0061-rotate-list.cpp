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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int n =0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        if(head==NULL){
            return head;
        }
        k = k%n;
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        
        
        int x = n-k;
        ListNode* cur = head;
        ListNode* prev = NULL;
        while(x!=0){
            prev = cur;
            cur=cur->next;
            x--;
        }
        ListNode* ans = cur;
        prev->next = NULL;
        ListNode* p1 = NULL;
        while(cur!=NULL){
            p1=cur;
            cur=cur->next;
        }
        
        p1->next = head;
        return ans;
        // return ans;
        
    }
};