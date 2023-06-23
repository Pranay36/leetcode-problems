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
    
    
    int findCircleNum(vector<vector<int>>& num) {
        int n = num.size();
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