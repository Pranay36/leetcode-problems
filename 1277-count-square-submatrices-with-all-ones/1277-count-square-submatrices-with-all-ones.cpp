class Solution {
public:
    int countSquares(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int>>dp(n,vector<int>(m,0));
        int sum=0;

        for(int i=0;i<n;i++){
            dp[i][0] = v[i][0];
            // sum +=dp[i][0];  
        }
        for(int i=0;i<m;i++){
            dp[0][i] = v[0][i];
        }
        // cout<<sum;
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(v[i][j]==1){
                    
                dp[i][j] = 1+min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]));
                }
                else
                    dp[i][j]=0;
                
                // sum = sum+dp[i][j];
            }
           
            // cout<<endl;
        }
         for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    sum = sum+dp[i][j];
                }
            } 
        return sum;
    }
};