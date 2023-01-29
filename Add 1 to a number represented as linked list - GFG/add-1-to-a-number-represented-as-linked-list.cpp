//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
     Node* reverse(Node* head) {

       //step 1
        Node* prev_p = NULL;
        Node* current_p = head;
        Node* next_p;
       
       //step 2
        while(current_p) {

            next_p = current_p->next;
            current_p->next = prev_p;
            
            prev_p = current_p;
            current_p = next_p;
        }

        head = prev_p; //step 3
        return head;
    }
    
    public:
    Node* addOne(Node *head) 
    { 
        if(head->next==NULL){
            head->data =head->data + 1;
            return head;
        }
        
        Node* rev = reverse( head);
        Node* temp = rev;
       
        while(temp!=NULL){
           temp->data = temp->data +1;
            if(temp->data!=10 || temp->next==NULL){
               break;
            }
            else{
                
                temp->data  = 0;
                temp = temp->next;
                
            }
        }
        
       
        
        
        Node* ans = reverse(rev);
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends