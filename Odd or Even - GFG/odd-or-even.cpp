//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string oddEven(int N){
        int mask = 1<<0;
        string s;
        if(N&mask!=0){
           s = "odd"; 
        }else{
            s = "even";
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.oddEven(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends