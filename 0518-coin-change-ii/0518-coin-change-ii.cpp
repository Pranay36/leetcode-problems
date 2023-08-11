class Solution {
public:
    
    int solve(vector<int> &coin, int n,vector<vector<int>>&dp,int sum){
        if(n==0){
            if(sum==0){
            return 1;
            }
            else if(sum%coin[n]==0)
                return 1;
            else
                return 0;
        }
        
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        
        int take=0;
        
        int nottake =solve(coin,n-1,dp,sum);
        if(coin[n]<=sum){
            take = solve(coin,n,dp,sum-coin[n]);
        }
        return dp[n][sum]= take+nottake;
    }
    
    int change(int sum, vector<int>& coin) {
        int n = coin.size();
        vector<vector<int>> dp(n, vector<int>(sum+1,-1));
        int x = solve(coin,n-1,dp,sum);
        return x;
    }
};