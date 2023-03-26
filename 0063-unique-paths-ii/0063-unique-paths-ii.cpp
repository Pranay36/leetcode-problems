class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        int count;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x = v[i][j];
                if(i==0 &&j==0 && x==0){
                    dp[i][j]=1;
                }
                else{
                int up = 0;
                int right =0;
                    if(x!=1){
                if(i>0){
                    up = dp[i-1][j];
                }
                if(j>0){
                    right = dp[i][j-1];
                }
                    }
                dp[i][j] = up+right;
                }
            }
        }
        return dp[n-1][m-1];
    }
};