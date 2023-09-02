//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<pair<int,int>,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    dis[i][j]=2;
                }else{
                    dis[i][j]=0;
                }
            }
        }
 
        int mx =0;
        int dx[4] = {0,-1,0,1};
        int dy[4] = {-1,0,1,0}; 
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            mx = max(mx,t);
            q.pop();

            for(int i=0;i<4;i++){
                int r = row+dx[i];
                int c = col + dy[i];
                if(r>=0 && r<n && c>=0 && c<m && dis[r][c]==0 && grid[r][c]==1){
                    q.push({{r,c},t+1});
                    dis[r][c]=2;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dis[i][j]!=2 &&grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return mx;
    }
};












//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends