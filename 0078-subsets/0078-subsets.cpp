class Solution {
public:
    void solve(vector<int>& num, vector<vector<int>>&ans, vector<int> &v,int ind){
        if(ind==num.size()){
            ans.push_back(v);
            return;
        }
        
        v.push_back(num[ind]);
        solve(num,ans,v,ind+1);
        v.pop_back();
        solve(num,ans,v,ind+1);
        return;
    }
    vector<vector<int>> subsets(vector<int>& num) {
        vector<vector<int>>ans;
        vector<int> v;
        int ind=0;
        solve(num,ans,v,ind);
        return ans;
    }
};