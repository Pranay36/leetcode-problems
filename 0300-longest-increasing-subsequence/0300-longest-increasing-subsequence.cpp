class Solution {
public:
    int f(vector<int> &v,int i,int prev,int n,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        int nottake = f(v,i+1,prev,n,dp);

        int take =0;
        if(prev==-1||v[i]>v[prev]){
            take = 1+f(v,i+1,i,n,dp);
        }
        return dp[i][prev+1] = max(take,nottake);
    }
    
    int lengthOfLIS(vector<int>& v) {
        int n = v.size();
        int prev = -1;  
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        int x = f(v,0,prev,n,dp);
        return x;
    }
};