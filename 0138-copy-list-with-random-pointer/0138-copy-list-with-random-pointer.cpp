/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *temp =head; 
        while(temp!=NULL){
        Node* n = new Node(temp->val);
            n->next = temp->next;
            temp->next = n;
            temp = temp->next->next;
        }
        
        Node* cur = head;
        while(cur!=NULL){
            if(cur->random!=NULL){
                cur->next->random=cur->random->next;
            }
            cur = cur->next->next;
        }
        
        Node* dummy = new Node(0);
        cur = head;
        temp = dummy;
        Node* fast;
        while(cur!=NULL){
            fast = cur->next->next;
            temp->next = cur->next;
            cur->next = fast;
            temp= temp->next;
            cur = fast;
        }
        return dummy->next;
        
    }
};