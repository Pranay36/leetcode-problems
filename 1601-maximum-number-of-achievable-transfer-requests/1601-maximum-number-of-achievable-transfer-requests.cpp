class Solution {
public:
    
    void solve(vector<vector<int>>&req, vector<int> &v, int i, int cnt, int &mx){
        if(i==req.size()){
            for(auto it:v){
                if(it!=0){
                    return;
                }
            }
            mx = max(mx,cnt);
            return;
        }
        solve(req,v,i+1,cnt,mx);
        v[req[i][0]]--;
        v[req[i][1]]++;
        solve(req,v,i+1,cnt+1,mx);
        v[req[i][0]]++;
        v[req[i][1]]--;
        return ;
        
    }
    int maximumRequests(int n, vector<vector<int>>& req) {
        vector<int> v(n,0);
        int mx=0;
        solve(req,v,0,0,mx);
        return mx;
    }
};