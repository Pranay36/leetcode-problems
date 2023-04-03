class Solution {
public:
    int f(string &temp,string &s, int i,int j,vector<vector<int>> &dp){
        if(i<0||j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(temp[i]==s[j]){
            return dp[i][j]= 1+ f(temp,s,i-1,j-1,dp);
        }
        return dp[i][j]= max(f(temp,s,i,j-1,dp),f(temp,s,i-1,j,dp));
    }
    
    
    int minInsertions(string s) {
        int n = s.size();
        string temp = s;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        reverse(s.begin(),s.end());
        int x = f(temp,s,n-1,n-1,dp);
        return n-x;
    }
    
};