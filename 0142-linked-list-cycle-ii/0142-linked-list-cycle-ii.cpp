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
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        map<ListNode*,int> m;
        m[temp]++;
        while(temp!=NULL){
            m[temp->next]++;
            if(m[temp->next]>=2){
                return temp->next;
            }
            temp = temp->next;
        }
        return NULL;
    }
};