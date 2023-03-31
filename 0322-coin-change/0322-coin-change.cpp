class Solution {
public:
    int f(vector<int>&v, int sum, int i, vector<vector<int>>&dp){
        if(i==0){
            if(sum%v[i]==0){
                return sum/v[i];
            }
            else{
                return 1e9;
            }
        }
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
      
        int nottake = f(v,sum,i-1,dp);
        // int rep = 0;
        int take =INT_MAX;
        
        if(sum>=v[i]){
            take = 1+f(v,sum-v[i],i,dp);
        }
        
        return dp[i][sum]=min(nottake,take);
    }
    
    int coinChange(vector<int>& v, int sum) {
        int n = v.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        int x= f(v, sum, n-1,dp);
        if(x!=1e9)
        return x;
        else
            return -1;
    }
};