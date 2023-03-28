class Solution {
public:
    bool f(int i,int sum,vector<vector<int>> &dp, vector<int>& v){
        if(sum ==0){
            return true;
        }
        if(i==0){
            return v[i]==sum;
        }
        
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        
        bool nottake = f(i-1,sum,dp,v);
        bool take =false;
        if(v[i]<=sum){
            take = f(i-1,sum-v[i],dp,v);
        }
        return dp[i][sum] = nottake||take;
        
    }
    
    bool canPartition(vector<int>& v) {
        int n = v.size();
        int sum =0;
        for(int i=0;i<n;i++){
            sum += v[i];
        }
        if(sum%2!=0){
            return false;
        }
        int k = sum/2;
        vector<vector<int>> dp(n, vector<int>(k+1,-1));
        bool x =f(n-1,k,dp,v);
        return x;
        
        
    }
};