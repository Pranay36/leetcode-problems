//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
  
  void dfs(int x, vector<int> &v,vector<int> adj[]){
        v[x]=1;
        for(auto it: adj[x]){
            if(!v[it]){
                dfs(it,v,adj);
            }
        }
    }
    
  
    int numProvinces(vector<vector<int>> num, int n) {
                // int n = num.size();
        vector<int> adj[n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(num[i][j]==1&&i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<int> v(n+1,0);
        int count =0;
        for(int i=0;i<n;i++){
            if(v[i]!=1){
                dfs(i,v,adj);
                count++;
            }
        }
        return count;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends