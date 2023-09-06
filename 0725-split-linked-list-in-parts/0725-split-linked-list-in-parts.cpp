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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k,NULL);
        int n = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        int p = n%k;
        int q = n/k;
        temp = head;
        int j =0;
        while(temp!=NULL){
            ListNode* dummy = new ListNode(0);
            ListNode* cur = dummy;;
            for(int i=0;i<q;i++){
                ListNode* fix = new ListNode(temp->val);
                cur->next = fix;
                cur = cur->next;
                temp= temp->next;
            }
            if(p>0){
                ListNode* fix = new ListNode(temp->val);
                cur->next = fix;
                cur = cur->next;
                temp= temp->next;
                p--;
            }
            ans[j]=dummy->next;
            j++;
        }
        return ans;
    }
};