class Solution {
public:
    bool solve(int i, int open, string &s, int n, vector<vector<int>> &dp){
        if(i==n){
            return open==0;
        }
        if(dp[i][open]!=-1){
            return dp[i][open];
        }
        bool ans=false;
        if(s[i]=='*'){
            ans = ans | solve(i+1,open+1,s,n,dp);
            if(open!=0)
                ans = ans | solve(i+1,open-1,s,n,dp);
            ans = ans | solve(i+1,open,s,n,dp);
        }
        else{
            if(s[i]=='('){
                ans = ans | solve(i+1,open+1,s,n,dp);
            }
            if(s[i]==')'){
                if(open!=0)
                    ans = ans | solve(i+1,open-1,s,n,dp);
            }
        }
        
        return dp[i][open] = ans;
        // return ans;
    }
    
    
    
    bool checkValidString(string s) {
        int n = s.size();
        vector<vector<int>> dp(n,vector<int> (n,-1));
        return solve(0,0,s,n,dp);
    }
};