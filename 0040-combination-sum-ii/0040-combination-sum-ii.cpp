class Solution {
public:
    void solve(vector<int>&v, vector<vector<int>>&ans, vector<int>& can,int sum,int ind){
            if(sum==0){
                ans.push_back(v);
                return;

            }
        
        
        for(int i= ind;i<can.size();i++){
            if(i>ind&&can[i]==can[i-1])
                continue;
            if(can[i]>sum)
                break;
            v.push_back(can[i]);
            solve(v,ans,can,sum-can[i],i+1);
            v.pop_back();
        }
     
        
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int sum) {
        vector<int>v;
        vector<vector<int>> ans;
        int i=0;
        sort(can.begin(),can.end());
        solve(v,ans,can,sum,i);
        return ans;
    }
};