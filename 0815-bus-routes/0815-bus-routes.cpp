class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        map<int,set<int>> adj;
        int buscount=routes.size();
        for(int bus=0;bus<buscount;bus++){
            for(auto stations:routes[bus]){
                adj[stations].insert(bus);
            }
        }
        set<int> bustaken,stationsvisited;
        queue<pair<int,int>> track;
        track.push({source,0});
        stationsvisited.insert(source);
        
        while(!track.empty()){
            int station=track.front().first;
            int busestaken=track.front().second;
            track.pop();
            
             if(station==target) return busestaken;
              for(auto busesavail : adj[station]){ // buses available at a station
                if(!bustaken.count(busesavail)){ // Exclude the buses which have not been taken
                    for(auto reach : routes[busesavail]){ // stations which can be reached from that station
                        if(!stationsvisited.count(reach)){ // Stations which you have already visited exclude them
                            track.push({reach,busestaken+1});
                            stationsvisited.insert(reach);
                        }

                    }
                    bustaken.insert(busesavail); // buses visited 
                }
            }
        }
        return -1;
    }
};