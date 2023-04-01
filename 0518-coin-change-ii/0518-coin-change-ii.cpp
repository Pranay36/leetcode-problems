class Solution {
public:
    int f(vector<int>&v, int sum, int i, vector<vector<int>> &dp){
        if(i==0){
            if(sum==0){
                return 1;
            }
            else if(sum%v[i]==0)
                return 1;
            else 
                return 0;
        }
        
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        
        int nottake = f(v,sum,i-1,dp);
        int take = 0;
        if(v[i]<=sum){
            take = f(v,sum-v[i],i,dp);
        }
        return dp[i][sum]= nottake+take;
    }
    
    
    int change(int sum, vector<int>& v) {
        int n = v.size();
        vector<vector<int>> dp(n, vector<int> (sum+1, -1));
        int x = f(v,sum,n-1,dp);
        return x;
    }
};