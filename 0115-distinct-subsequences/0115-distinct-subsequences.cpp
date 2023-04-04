class Solution {
public:
    
    int f(string &str1,string &str2,int i,int j,vector<vector<int>>&dp){
        if(j<0){
            return 1;
        }
        if(i<0){
            return 0;
        }
        
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(str1[i]==str2[j]){
            return dp[i][j]= (f(str1,str2,i-1,j,dp)+ f(str1,str2,i-1,j-1,dp));
            
        }
         
        return dp[i][j]= f(str1,str2,i-1,j,dp);
    }
    
    
    int numDistinct(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int x = f(str1,str2,n-1,m-1,dp);
        return x;
    }
};