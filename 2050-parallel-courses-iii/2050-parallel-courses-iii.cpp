class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& arr, vector<int>& time) {
        vector<int> adj[n];
        queue<int> q;
        vector<int> degree(n,0);
        vector<int> v(n,0);
        for(auto it: arr){
            int prev = it[0]-1;
            int next = it[1]-1;
            adj[prev].push_back(next);
            degree[next]++;
        }
        for(int i=0;i<n;i++){
            if(degree[i]==0){
                q.push(i);
                v[i]= time[i];
            }
        }
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it:adj[node]){
                degree[it]--;
                v[it] = max(v[it],v[node]+time[it]);
                if(degree[it]==0){
                    q.push(it);
                }
            }
        }
        return *max_element(v.begin(),v.end());
    }
};