//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vec(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                vec[i][0] = 1;
                q.push({i,0});
            }
            if(grid[i][m-1]==1){
                vec[i][m-1]=1;
                q.push({i,m-1});
            }
        }
        for(int i=1;i<m-1;i++){
            if(grid[0][i]==1){
                vec[0][i]=1;
                q.push({0,i});
            }
            if(grid[n-1][i]==1){
                vec[n-1][i]=1;
                q.push({n-1,i});
            }
        }
        
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,1,0,-1};
        
        while(q.size()!=0){
            auto p = q.front();
            q.pop();
            int row = p.first;
            int col = p.second;
            for(int i=0;i<4;i++){
                int r = row + dx[i];
                int c = col + dy[i];
                if(r>=0 &&c>=0 && r<n &&c<m && grid[r][c]==1 && vec[r][c]==0){
                    vec[r][c] =1;
                    q.push({r,c});
                }
            }
        }
        int cntx =0;
        int cnty=0;
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<vec[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<q.front().second;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)
                cntx++;
                
                if(vec[i][j]==1)
                cnty++;
            }
        }
        int ans = cntx-cnty;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends