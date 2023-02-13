class Solution {
public:
    void solve(int ind,vector<int>&v,vector<vector<int>>&ans,vector<int>&num){
        // if(ind==num.size()){
        //     ans.push_back(v);
        //     return;
        // }
        ans.push_back(v);
        for(int i=ind;i<num.size();i++){
            if(i>ind && num[i]==num[i-1])
                continue;
            v.push_back(num[i]);
            solve(i+1,v,ans,num);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& num) {
        vector<vector<int>> ans;
        vector<int>v;
        int i=0;
        sort(num.begin(),num.end());
        solve(i,v,ans,num);
        return ans;
    }
};