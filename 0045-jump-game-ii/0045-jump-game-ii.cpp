class Solution {
public:
    long long int f(int i,int count,vector<int> &v, int n,vector<int> &dp){
        if(i>=n-1){
            return 0; 
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int temp = 100000;
        for(int j=1;j<=v[i];j++){
            // cout<<j<<" ";
            if(i+j<n){
                int con = 1+f(i+j,count,v,n,dp);
                temp = min(temp,con); 
            }
        }
        // cout<<endl;
       
        
        return dp[i]= temp;
        
    }
    
    int jump(vector<int>& v) {
       int n = v.size();
        int count =0;
        int ans=0;
        vector<int> dp(n,-1);
        int x = f(0,count,v,n,dp);
        return x;
    }
};

