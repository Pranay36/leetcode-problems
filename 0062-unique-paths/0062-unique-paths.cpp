class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(n,vector<int>(m,0));
        int count;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 &&j==0){
                    dp[i][j]=1;
                }
                else{
                int down = 0;
                int right =0;
                if(i>0){
                    down = dp[i-1][j];
                }
                if(j>0){
                    right = dp[i][j-1];
                }
                dp[i][j] = down+right;
                }
            }
        }
        return dp[n-1][m-1];
    
    }
};