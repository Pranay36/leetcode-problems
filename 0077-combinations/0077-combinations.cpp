class Solution {
    public:
    void solve(int ind, vector<int> &ds,int n, vector<vector<int>> &ans, int k){
        if(ds.size() == k){
            ans.push_back(ds);
            return;
        }
        
        for(int i=ind;i<=n;i++){
        ds.push_back(i);
        solve(i+1,ds,n,ans,k);
        ds.pop_back();
        }
    }
    
public:
    vector<vector<int>> combine(int n, int k) {
       
        vector<int> ds;
        vector<vector<int>> ans;
        
        solve(1,ds,n,ans,k);
        return ans;
    }
};