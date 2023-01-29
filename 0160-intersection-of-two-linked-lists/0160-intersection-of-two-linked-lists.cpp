/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempa = headA;
        ListNode* tempb  = headB;
        ListNode* temp = headA;

        
        map<ListNode*,int> m;
        
        while(tempa!=NULL){
            m[tempa]++;
            tempa= tempa->next;
        }
        while(tempb!=NULL){
            m[tempb]++;
            if(m[tempb]==2){
                return tempb;
            }
            tempb =tempb->next;
        }
        return NULL;
        
    }
};