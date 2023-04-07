//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
     int f(int v[],int i,int buy,int n,int k, vector<vector<vector<int>>> &dp){
        if(i==n){
            return 0;
        }
        if(k==0){
            return 0;
        }
        if(dp[i][buy][k]!=-1){
            return dp[i][buy][k];
        }
        if(buy==1){
            return dp[i][buy][k]= max(-v[i]+f(v,i+1,0,n,k,dp), f(v,i+1,1,n,k,dp));
        }else{
            return dp[i][buy][k]= max(v[i]+f(v,i+1,1,n,k-1,dp),f(v,i+1,0,n,k,dp));
        }
        
    }
    int maxProfit(int k, int n, int v[]) {
        
        int buy=1;
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2,vector<int>(k+1,-1)));
        int x = f(v,0,buy,n,k,dp);
        return x;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends