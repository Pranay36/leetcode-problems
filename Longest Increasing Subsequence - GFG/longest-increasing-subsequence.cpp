//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    
    int f(int v[],int i,int prev,int n,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        int nottake = f(v,i+1,prev,n,dp);

        int take =0;
        if(prev==-1||v[i]>v[prev]){
            take = 1+f(v,i+1,i,n,dp);
        }
        return dp[i][prev+1] = max(take,nottake);
    }
    
    
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int v[])
    {
       
        int prev = -1;  
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        int x = f(v,0,prev,n,dp);
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends