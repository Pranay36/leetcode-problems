//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRod(int val[], int n) {
        vector<int> wt;
        for(int i=0;i<n;i++){
            wt.push_back(i+1);
        }
        int w =n;
        vector<vector<int>>dp(n+1,vector<int>(w+1,0));
       for(int i=1;i<=n;i++){
           for(int j= 1;j<=w;j++){
               int nottake = dp[i-1][j];
               int take=0;
               if(wt[i-1]<=j){
                   take = val[i-1]+dp[i][j-wt[i-1]];
               }
               dp[i][j] = max(take,nottake);
           }
       }
       return dp[n][w];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends