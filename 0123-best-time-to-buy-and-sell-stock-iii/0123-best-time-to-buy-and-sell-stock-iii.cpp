class Solution {
public:
    int f(vector<int> &v,int i,int buy,int n,int count,vector<vector<vector<int>>>&dp){
        if(i==n){
            return 0;
        }
        if(count==0){
            return 0;
        }
        if(dp[i][buy][count]!=-1){
            return dp[i][buy][count];
        }
        if(buy==1){
            return dp[i][buy][count]= max(-v[i]+f(v,i+1,0,n,count,dp), f(v,i+1,1,n,count,dp));
        }else{
            return dp[i][buy][count]= max(v[i]+f(v,i+1,1,n,count-1,dp),f(v,i+1,0,n,count,dp));
        }
    }
    
    int maxProfit(vector<int>& v) {
        int n = v.size();
        int buy = 1;
        // vector<vector<int>>dp(n,vector<int>(2,-1));
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        int x = f(v,0,buy,n,2,dp);
        return x;
    }
};