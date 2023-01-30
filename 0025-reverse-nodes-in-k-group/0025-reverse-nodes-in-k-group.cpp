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
//     ListNode* reverse(ListNode* head, int k){
//         ListNode* prev_p = NULL;
//         ListNode* current_p = head;
//         ListNode* next_p;
//         if(head->next =NULL){
//             return head;
//         }
       
//        //step 2
//         while(k!=0) {

//             next_p = current_p->next;
//             current_p->next = prev_p;
            
//             prev_p = current_p;
//             current_p = next_p;
//             k--;

//         }

//         head = prev_p; //step 3
//         return head;

//     }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n =0;
        ListNode* temp = head;
        if(head==NULL ||k==1){
            return head;
        }
        
        while(temp!=NULL){
            temp = temp->next;
            n++;
        }
        cout<<n;
        int x = n/k;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* pre = dummy;
        ListNode* cur;
        ListNode* nex;
        
        while(x!=0){
            cur = pre->next;
            nex = cur->next;
            for(int i=1;i<k;i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            x--;
            
        }

        return dummy->next;
    }
};