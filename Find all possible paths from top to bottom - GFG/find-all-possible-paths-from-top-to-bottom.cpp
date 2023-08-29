//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:

    void solve(int i, int j,int n, int m, vector<vector<int>> &grid, vector<int> &ds,vector<vector<int>> &ans){
        if(i==n-1 && j==m-1){
            ans.push_back(ds);
            return;
        }
        int dx[2] = {0,1};
        int dy[2] = {1,0};
        for(int k=0;k<2;k++){
            int r = i+dx[k];
            int c = j+dy[k];
            if(r<n&&c<m){
                ds.push_back(grid[r][c]);
                solve(r,c,n,m,grid,ds,ans);
                ds.pop_back();
            }
        }
        return;
    }
    
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        ds.push_back(grid[0][0]);
        solve(0,0,n,m,grid,ds,ans);
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

// } Driver Code Ends