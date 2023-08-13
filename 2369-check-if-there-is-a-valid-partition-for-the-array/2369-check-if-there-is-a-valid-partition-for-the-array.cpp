class Solution {
public:
    
    bool solve(vector<int>&num, int i, vector<int> &dp){
        int n = num.size();
        if(i==n)
            return true;
        
        if(dp[i]!=-1)
            return dp[i];
        
        bool res = false;
        if(i+1<n &&num[i]==num[i+1]){
            res = solve(num,i+2,dp);
            if(i+2<n && num[i]==num[i+2])
                res = res||solve(num,i+3,dp);
        }
        
        if(i+2<n && num[i+1]-num[i]==1 &&num[i+2]-num[i+1]==1){
            res =res||solve(num,i+3,dp);
        }
        return dp[i]=res;
    }
    
    bool validPartition(vector<int>& num) {
        int n = num.size();
        vector<int> dp(n,-1);
        if(n==2){
            return num[0]==num[1];
        }
        return solve(num,0,dp);
    }
};