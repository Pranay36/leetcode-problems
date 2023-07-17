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
    ListNode* reverse(ListNode* l){
        if(l->next==NULL ||l==NULL){
            return l;
        }
        ListNode* cur = l;
        ListNode* pre=NULL ;
        ListNode* nxt = NULL;
        while(cur!=NULL){
            nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        l=pre;
        return pre;
        
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1 = reverse(l1);
        ListNode* h2 = reverse(l2);
        
        int carry=0;
        ListNode* cur1=h1;
        ListNode* cur2=h2;
        int n=0,m=0;
        while(cur1!=NULL){
            cur1 = cur1->next;
            n++;
        }
        while(cur2!=NULL){
            cur2 = cur2->next;
            m++;
        }
        if(m>n){
            cur1 = h2;
            cur2 = h1;
        }
        else{
            cur1 = h1;
            cur2 =h2;
        }
        int t=0;
        while(cur1!=NULL||cur2!=NULL){
            if(carry==1)
                cur1->val +=1;
            
            if(cur2!=NULL){
            int x = cur1->val + cur2->val;
            if(x>=10){
                x = x%10;
                carry=1;
            }else
                carry=0;
            cur1->val =x; 
            cur1=cur1->next;
            cur2 =cur2->next; 
            }else{
            int x = cur1->val;
               if(x>=10){
                x = x%10;
                carry=1;
            }else
                carry=0;
            cur1->val =x; 
            cur1=cur1->next;
            }
            t++;
        }
        // cout<<t;
       ListNode* ans = NULL;
        if(m>n) ans = reverse(h2);
        else ans = reverse(h1);
        if(carry==1){
            ListNode* temp = new ListNode(1);
             temp->next = ans;
            ans = temp;
        }
        return ans;
    }
};