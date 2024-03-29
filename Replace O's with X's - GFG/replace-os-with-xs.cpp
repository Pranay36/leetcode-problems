//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<char>> v(n, vector<char> (m,'X'));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0){
                    if(mat[i][j]=='O'){
                    v[i][j]='O';
                    q.push({i,j});
                    }
                }
                if( i==n-1 || j==m-1){
                    if(mat[i][j]=='O'){
                    v[i][j]='O';
                    q.push({i,j});
                    }
                }
            }
        }
        int dx[4] = {0,-1,0,1};
        int dy[4] = {-1,0,1,0};
        
        while(q.size()!=0){
            auto p = q.front();
            q.pop();
            int row = p.first;
            int col = p.second;
            for(int i=0;i<4;i++){
                int r = row +dx[i];
                int c = col + dy[i];
                
                if(r>=0&& c>=0&& r<n&&c<m&& mat[r][c]=='O' && v[r][c]!='O'){
                    q.push({r,c});
                    v[r][c] = 'O';
                }
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends