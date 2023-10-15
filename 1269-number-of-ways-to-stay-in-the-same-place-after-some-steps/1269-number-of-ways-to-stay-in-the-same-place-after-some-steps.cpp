class Solution {
public:
    int MOD = 1000000007;
    map<pair<int,int>,int>dp;
    long long f(int i, int k,int n){
        if(i==n){
            return 0;
        }
        if(i==0&& k==0){
            return 1;
        }
        if(i<0){
            return 0;
        }
        if(k==0){
            return 0;
        }
        // if(dp[i][k]!=-1){
        //     return dp[i][k];
        // }
        if(dp.find({k,i}) != dp.end())return dp[{k,i}];
        long long  x = ((f(i+1,k-1,n)+f(i,k-1,n))%MOD+f(i-1,k-1,n)%MOD)%MOD;
        
        return dp[{k,i}] = x;
    }
    int numWays(int step, int arrLen) {
        // vector<vector<int>> dp(arrLen+1, vector<int>(step+1,-1));
        long long  x = f(0,step,arrLen);
        // int x =9;
        x = x%MOD;
        return x;
    }
};