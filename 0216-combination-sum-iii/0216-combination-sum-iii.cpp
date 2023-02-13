class Solution {
public:
    void solve(vector<int> &v,vector<vector<int>>&ans,int k,int n,int i,int s){
        if(i==10){
            if(n==0&&v.size()==k){
                ans.push_back(v);
                return;
            }
            else{
                return;
            }
            
        }
        v.push_back(i);
        solve(v,ans,k,n-i,i+1,s);
        v.pop_back();
        solve(v,ans,k,n,i+1,s);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        vector<vector<int>>ans;
        int i=1;
        int s=0;
        solve(v,ans,k,n,i,s);
        return ans;
    }
};