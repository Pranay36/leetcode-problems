class Solution {
public:
    int findCenter(vector<vector<int>>& v) {
        int n=v.size();
        int mx=0;
        int ans =0;
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[v[i][0]]++;
            m[v[i][1]]++;
        }
        
        for(auto x:m){
            if(mx<x.second){
                ans =x.first;
                    mx = x.second;
            }
        }
        return ans;
    }
};