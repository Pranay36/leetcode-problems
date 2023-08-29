//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    Node* reverse(Node* head){
        Node *cur = head;
        Node *pre = NULL;
        Node *nxt = head;
        while(cur!=NULL){
            nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        return pre;
    }
    public:
    Node *compute(Node *head)
    {
        if(head->next==NULL||head==NULL){
            return head;
        }
        head = reverse(head);
        
        Node* cur = head;
        Node* temp =head->next;
        
        while(temp!=NULL){
            if(temp->next ==NULL){
                if(temp->data<cur->data){
                    cur->next = NULL;
                    break;
                }
            }
            if(temp->data<cur->data){
                temp = temp->next;
            }
            else{
                cur->next = temp;
                cur =temp;
                temp = temp->next;
                
            }
        }
     return reverse(head);
    }
   
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends