class Solution {
public:
    int f(string s,int i,int n,vector<int>&dp){
        if(i>=n)
            return 1;
        
        if(dp[i]!=-1){
            return dp[i];
        }
        
        int x = s[i]-'0';
        int y = 0;
        if(i<n-1){
            y = x*10 + (s[i+1]-'0');
        }
        int ans =0;
        if(x>0){
            ans = ans + f(s,i+1,n,dp);
        }
        if(x>0 && y>0 && y<=26){
           ans = ans + f(s,i+2,n,dp); 
        }
        return dp[i] = ans;
        
    }
    
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1,-1);
        int x = f(s,0,n,dp);
        return x;
    }
};