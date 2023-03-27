class Solution {
public:
    int minPathSum(vector<vector<int>>& v ) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        int count;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 &&j==0){
                    dp[i][j]=v[i][j];
                }
                else{
                int up = 0;
                int right =0;
                if(i>0){
                    up = v[i][j]+ dp[i-1][j]; 
                }else{
                    up =INT_MAX;
                }
                if(j>0){
                    right = v[i][j]+ dp[i][j-1];
                }else{
                    right = INT_MAX;
                }
                dp[i][j] = min(up,right);
                }
            }
        }
        return dp[n-1][m-1];
    }
    
};