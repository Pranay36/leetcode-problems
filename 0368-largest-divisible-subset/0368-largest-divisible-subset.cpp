class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& v) {
        int n = v.size();
        vector<int>dp(n,1);
        vector<int>hash(n,0);
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            hash[i] = i;
            for(int prev = 0;prev<i;prev++){
                if((v[i]%v[prev]==0||v[prev]%v[i]==0) && 1+dp[prev]>dp[i]){
                    dp[i] = 1+dp[prev];
                    hash[i]=prev;
                }
                
            }
        }
        
        vector<int> ans;
        int mx=0;
        int ind =-1;
        for(int i=0;i<n;i++){
            if(mx<dp[i]){
                mx = dp[i];
                ind  =i;
            }
        }
        
        ans.push_back(v[ind]);
        while(hash[ind]!=ind){
            ind  = hash[ind];
            ans.push_back(v[ind]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};