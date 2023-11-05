class Solution {
public:
//     int solve(vector<int>&v,int n){
//         if(n==1){
//             return v[n]=1;
//         }if(n==0){
//             return v[n]=1;
//         }
//         if(v[n]!=-1){
//             return v[n];
//         }
//         return v[n] = solve(v,n-1)+solve(v,n-2);
        
//     }
    int climbStairs(int n) {
        if(n==1 ||n==2){
            return n;
        }
        vector<int>dp(n+1,0);
       // int x = solve(v,n);
       //  return x;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};