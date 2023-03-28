//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(int i,int j,int b, vector<vector<int>>& v ,int n,int m ,vector<vector<vector<int> > > &dp){
        if(j<0 ||j>m-1|| b<0||b>m-1){
            return -1e8;
        }
        if(i==n-1){
            if(j ==b)
            return v[i][j];
            else
            return v[i][j]+v[i][b];
        }
        if(dp[i][j][b]!=-1){
            return dp[i][j][b]; 
        }
        
        int mx =0;
        for(int dj =-1;dj<=1;dj++){
            for(int db = -1;db<=1;db++){
                if(j==b)
                mx = max(mx,v[i][j]+f(i+1,j+dj,b+db,v,n,m,dp));
                else
                mx = max(mx,v[i][j]+v[i][b]+f(i+1,j+dj,b+db,v,n,m,dp));
            }
        }
        return dp[i][j][b]= mx;
    }
    
    int solve(int n, int m, vector<vector<int>>& v) {
       vector<vector<vector<int> > > dp(n,vector<vector<int> >(m, vector<int>(m,-1)));
        int i=0;
        int j = 0;
        int a= 0;
        int b =m-1;
        int x = f(i,j,b,v,n,m,dp);
        return x;
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
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends