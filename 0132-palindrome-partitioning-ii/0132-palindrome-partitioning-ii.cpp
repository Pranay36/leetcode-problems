class Solution {
public:
    bool ispalan(string &s,int i,int j){
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int f(string &s,int i,int n,vector<int>&dp){
        if(i==n){
            return 0;
        }
        string temp ="";
        if(dp[i]!=-1){
                return dp[i];
            }
        int mn = INT_MAX;
        for(int j=i;j<n;j++){
            // temp += s[j];
            
            if(ispalan(s,i,j)){
               int ans= 1+f(s,j+1,n,dp);
               mn = min(mn,ans);
            }
               
        }

        return  dp[i]=mn;
    }
    
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n,-1);
        return f(s,0,n,dp)-1;
    }
};