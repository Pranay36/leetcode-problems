class Solution {
public:
    int solve(vector<int>&v,int n){
        if(n==1){
            return v[n]=1;
        }if(n==0){
            return v[n]=1;
        }
        if(v[n]!=-1){
            return v[n];
        }
        return v[n] = solve(v,n-1)+solve(v,n-2);
        
    }
    int climbStairs(int n) {
        vector<int>v(n+1,-1);
       int x = solve(v,n);
        return x;
    }
};