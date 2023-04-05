class Solution {
public:
    int f(vector<int>&v,int i,int buy,int n,vector<vector<int>>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        if(buy==1){
            return dp[i][buy] =max(-v[i]+f(v,i+1,0,n,dp), f(v,i+1,1,n,dp));
        }
        else{
            return dp[i][buy]= max(v[i]+f(v,i+1,1,n,dp),f(v,i+1,0,n,dp));
        }
    }
    
    int maxProfit(vector<int>& v) {
        int buy =1;
        int n = v.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        int x = f(v,0,buy,n,dp);
        return x;
    }
};