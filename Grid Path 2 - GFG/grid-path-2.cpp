//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int totalWays(int n, int m, vector<vector<int>>& v) {

        vector<vector<int>>dp(n,vector<int>(m,0));
        int count;
        int mod = 1e9+7;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x = v[i][j];
                if(i==0 &&j==0 && x==0){
                    dp[i][j]=1;
                }
                else{
                int up = 0;
                int right =0;
                    if(x!=1){
                if(i>0){
                    up = dp[i-1][j]%mod;
                }
                if(j>0){
                    right = dp[i][j-1]%mod;
                }
                    }
                dp[i][j] = (up+right)%mod;
                }
            }
        }
        
         int c = dp[n-1][m-1]%mod;
        return c;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < m; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.totalWays(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends