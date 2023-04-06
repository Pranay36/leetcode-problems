class Solution {
public:
    int f(vector<int>&v,int i,int buy,int n,int k, vector<vector<vector<int>>> &dp){
        if(i==n){
            return 0;
        }
        if(k==0){
            return 0;
        }
        if(dp[i][buy][k]!=-1){
            return dp[i][buy][k];
        }
        if(buy==1){
            return dp[i][buy][k]= max(-v[i]+f(v,i+1,0,n,k,dp), f(v,i+1,1,n,k,dp));
        }else{
            return dp[i][buy][k]= max(v[i]+f(v,i+1,1,n,k-1,dp),f(v,i+1,0,n,k,dp));
        }
        
    }
    
    int maxProfit(int k, vector<int>& v) {
        int n = v.size();
        int buy=1;
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2,vector<int>(k+1,-1)));
        int x = f(v,0,buy,n,k,dp);
        return x;
    }
};