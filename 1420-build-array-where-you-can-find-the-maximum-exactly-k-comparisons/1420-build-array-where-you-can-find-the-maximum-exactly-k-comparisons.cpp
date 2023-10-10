class Solution {
public:
    int MOD = 1e9+7;
    int f(int ind, int mxnum, int mxcount, int m, int n, int k, vector<vector<vector<int>>> &dp ){
        if(mxcount>k){
            return 0;
        }
        if(ind==n){
            if(mxcount==k){
                return 1;
            }
            else 
                return 0;
        }
        
        if(dp[ind][mxnum][mxcount]!=-1){
            return dp[ind][mxnum][mxcount];
        }
        int ans=0;
        for(int i=1;i<=m;i++){
            if(i>mxnum){
                ans += f(ind+1,i,mxcount+1,m,n,k,dp);
            }
            else{
                ans+= f(ind+1,mxnum,mxcount,m,n,k,dp);
            }
            ans%=MOD;
        }
        return dp[ind][mxnum][mxcount] = ans;
        
    }
    
    int numOfArrays(int n, int m, int k) {
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(m+1,vector<int>(k+1,-1)));
        return f(0,0,0,m,n,k,dp);
        
    }
};