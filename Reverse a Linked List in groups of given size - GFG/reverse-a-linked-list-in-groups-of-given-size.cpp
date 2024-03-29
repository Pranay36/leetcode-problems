//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    
    
    public:
    
    // struct node* rev(struct node *head, struct node* end)
    // {
    //     node* current = head;
    //     node *prev = NULL, *next = NULL;
 
    //     while (current != end) {
    //         next = current->next;
    //         current->next = prev;
    //         prev = current;
    //         current = next;
    //     }
    //     head = prev;
    // }
    
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL)
        return head;
        
        struct node* prev = NULL;
        struct node* temp = head;
        struct node* nxt = head;
        int i=0;
        while(i<k && nxt!=NULL){
            nxt= nxt->next;
            temp->next = prev;
            prev = temp;
            temp = nxt;
            i++;
        }
        head->next = reverse(temp,k);
        return prev;
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends