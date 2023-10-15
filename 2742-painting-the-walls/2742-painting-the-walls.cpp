class Solution {
public:
    int dp[501][501] = {};
//     int solve(vector<int>& cost, vector<int>& time, int i, int wallReamining){
//     if(wallReamining <= 0) return 0;
//     if(i >= cost.size()) return 1000000000;
//     if(dp[i][wallReamining] != 0) return dp[i][wallReamining];
//     int notTake = solve(cost, time, i+1, wallReamining);
//     int take = cost[i] + solve(cost, time, i+1, wallReamining -  time[i] -1); 
//     return dp[i][wallReamining] = min(notTake, take);      
// }

int f(int i, int remain,vector<int>&cost,vector<int>&time){
    int n = cost.size();
    if(remain<=0){
        return 0;
    }
    if(i==n){
        return 1000000000;
    }
    if(dp[i][remain]!=-1){
        return dp[i][remain];
    }
    
    int paint = cost[i]+f(i+1,remain-1-time[i],cost,time);
    int skip = f(i+1,remain,cost,time);
    return dp[i][remain]= min(paint,skip);
}
    
int paintWalls(vector<int>& cost, vector<int>& time) {
    // return solve(cost, time, 0, time.size());
    memset(dp, -1, sizeof(dp)); 
    int n = cost.size();
    int x= f(0,n,cost,time);
    if(x==INT_MAX){
        return -1;
    }
    return x;
}
};