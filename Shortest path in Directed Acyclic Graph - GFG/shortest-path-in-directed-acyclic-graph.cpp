//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    void dfs(vector<pair<int,int>> adj[], vector<int> &vis, stack<int> &st, int i){
	    vis[i]=1;
	    for(auto it:adj[i]){
	        if(vis[it.first]==0){
	            dfs(adj,vis,st,it.first);
	        }
	    }
	    st.push(i);
	}
    
  
     vector<int> shortestPath(int n,int m, vector<vector<int>>& edge){
       
       vector<pair<int,int>> adj[n];
       
       for(int i=0;i<m;i++){
           int x = edge[i][0];
           int y = edge[i][1];
           int w = edge[i][2];
           adj[x].push_back({y,w});
       }
       
       vector<int> vis(n,0);
	    stack<int>st;
	    for(int i=0;i<n;i++){
	        if(vis[i]==0){
	            dfs(adj,vis,st,i);
	        }
	    }
	    
	    vector<int> dis(n,1e9);
	    dis[0]=0;
	    while(!st.empty()){
	        int x = st.top();
	        st.pop();
	        
	        for(auto it:adj[x]){
	            int y = it.first;
	            int w = it.second;
	            if(dis[x]+w<dis[y]){
	                dis[y]  = dis[x]+w;
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(dis[i]==1e9){
	            dis[i] = -1;
	        }
	    }
	    return dis;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends