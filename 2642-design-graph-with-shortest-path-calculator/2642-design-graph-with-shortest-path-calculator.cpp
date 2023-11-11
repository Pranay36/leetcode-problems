class Graph {
public:
    
    vector<vector<pair<int, int>>> adj;
    
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        for(auto it: edges){
            adj[it[0]].push_back({it[1],it[2]});
        }
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].push_back({edge[1],edge[2]});
    }
    
    int shortestPath(int node1, int node2) {
       priority_queue<pair<int,int>> pq;
        int n = adj.size();
        vector<int> cost(n, INT_MAX);
        cost[node1] = 0;
        pq.push({0, node1});
        
        while (!pq.empty()) {
            auto [cost_i, i] = pq.top(); pq.pop();
            if (cost_i != cost[i])
                continue;
            for(auto [j, cost_j] : adj[i])
                if (cost_i + cost_j < cost[j]) {
                    cost[j] = cost_i + cost_j;
                    pq.push({cost[j], j});
                }
        }
        return cost[node2] == INT_MAX ? -1 : cost[node2];
    }
    
   
    
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */