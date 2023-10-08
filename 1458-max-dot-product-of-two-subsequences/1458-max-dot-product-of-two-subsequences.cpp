class Solution {
public:
    
    int f(vector<int>&num1,vector<int>&num2,int n, int m, int i,int j,vector<vector<vector<int>>> &dp, int l){
        if(i>=n||j>=m){
            if(l==1){
                return 0;
            }
            else
            return -1;
        }
        if(dp[i][j][l]!=-1){
            return dp[i][j][l];
            
        }
        
        int p = num1[i]*num2[j] + f(num1,num2,n,m,i+1,j+1,dp,1);
        int q = f(num1,num2,n,m,i,j+1,dp,l);
        int r = f(num1,num2,n,m,i+1,j,dp,l);
        
        return dp[i][j][l] = max(p,max(q,r));
        
    }
    
    int maxDotProduct(vector<int>& num1, vector<int>& num2) {
        int n = num1.size();
        int m = num2.size();
        int ans=1;
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int> (2,-1)));
        int x = f(num1,num2,n,m,0,0,dp,0);
        if(x==-1){
            sort(num1.begin(),num1.end());
            sort(num2.begin(),num2.end());
            return max(num1.front()*num2.back(), num2.front()*num1.back() );
        }
        return x;
    }
};