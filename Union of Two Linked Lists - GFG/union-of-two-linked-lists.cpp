//{ Driver Code Starts
#include<bits/stdc++.h>
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


// } Driver Code Ends
/*
// structure of the node is as follows

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
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
         map<int,int>m;
        Node* cur =head1;
        while(cur!=NULL){
            m[cur->data]++;
            cur= cur->next;
        }
        cur = head2;
        while(cur!=NULL){
            m[cur->data]++;
            cur= cur->next;
        }
        
        vector<int>v;
        for(auto it:m){
            v.push_back(it.first);
        }
        
        // sort(v.begin(),v.end());
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        
        // cout<<endl;
        
        
        Node* ans = new Node(v[0]);
        Node* cur3 = ans;
        for(int i=1;i<v.size();i++){
            Node* temp = new Node(v[i]);
            cur3->next = temp;
            cur3= cur3->next;
        }
        
        
        return ans;
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends