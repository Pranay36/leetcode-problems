class Solution {
public:
    int f(vector<vector<int>>& v, vector<vector<int>>& dp,int i,int j, int n){
        if(i==n-1){
            return v[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int x = INT_MAX;
        int y = INT_MAX;
        int z = INT_MAX;
        if(j>0 &&j<n-1){
            x = v[i][j] + f(v,dp,i+1,j-1,n);
            y = v[i][j] + f(v,dp,i+1,j,n);
            z = v[i][j]+ f(v,dp,i+1,j+1,n);
        }
        if(j==0){
            y = v[i][j] + f(v,dp,i+1,j,n);
            z = v[i][j]+ f(v,dp,i+1,j+1,n);
        }
        if(j==n-1){
            x = v[i][j] + f(v,dp,i+1,j-1,n);
            y = v[i][j] + f(v,dp,i+1,j,n);
        }
        return dp[i][j]= min(x,min(y,z));
        
    }
    int minFallingPathSum(vector<vector<int>>& v) {
        int n = v.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int ans =INT_MAX;
        for(int j=0;j<n;j++){
            int a = f(v,dp,0,j,n);
            ans = min(ans,a);
        }
        return ans;
    }
};