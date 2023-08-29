//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int maximumPath(int n, vector<vector<int>> matrix)
    {
         vector<vector<int>> dp(n,vector<int>(n,-1));
         for(int i=0;i<n;i++){
             dp[0][i] = matrix[0][i];
         }
        //  solve(0,n,dp,matrix);
         
         for(int i=0;i<n-1;i++){
            for(int j=0;j<n;j++){
            dp[i+1][j] = max(dp[i+1][j],dp[i][j]+matrix[i+1][j]);
            if(j+1<n)
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+matrix[i+1][j+1]);
            if(j-1>=0)
            dp[i+1][j-1]  = max(dp[i+1][j-1],dp[i][j]+matrix[i+1][j-1]);
            
        } 
         }
         
         int mx=0;
         for(int i=0;i<n;i++){
             mx = max(dp[n-1][i],mx);
         }
         
       
         return mx;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends