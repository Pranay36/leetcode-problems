//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        // vetor<int> adj[n];
        vector<vector<int>> v = image;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int init = v[sr][sc];
        v[sr][sc]=newColor;
        vector<vector<int>>adj;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(image[i][j]==1&& i!=sr && j!=sc){
        //             v[i][j]==1;
        //         }
        //     }
        // }
        
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,-1,0,1};
        while(q.size()!=0){
            auto p = q.front();
            int  r = p.first;
            int c = p.second;
            q.pop();
            for(int i=0;i<4;i++){
                int row  = r+dx[i];
                int col = c+dy[i];
                if(row>=0&&row<n&&col>=0&&col<m && image[row][col]==init && v[row][col]!=newColor){
                    v[row][col] = newColor;
                    q.push({row,col});
                }
            }
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends