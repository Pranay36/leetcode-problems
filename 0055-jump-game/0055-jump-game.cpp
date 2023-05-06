class Solution {
public:
    bool solve(int i, vector<int> &v, int n, vector<int> &dp){
        if(i==n-1)
            return 1;
        
        int x = i+v[i];
        if(dp[i]!=-1){
            return dp[i];
        }
        for(int j=i+1;j<=x;j++){
            if(solve(j,v,n,dp)){
                return 1;
            }
        }
        return dp[i] = 0;
    }
    
    bool canJump(vector<int>& v) {
        int n = v.size();
        vector<int> dp(n,-1);
        return solve(0,v,n,dp);
    }
};