class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int mod = 1000000007;
        sort(arr.begin(),arr.end());
        int n  = arr.size();
        vector<long long> dp(n,1);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]=i;
            for(int j = 0;j<i;j++){
                int x = arr[i]/arr[j];
                if(arr[i]%arr[j]==0 &&mp.find(x)!=mp.end()){
                    dp[i] = (dp[i]+ (dp[j]*dp[mp[x]]));
                }
            }
        }
        long long  ans =0;
        for(int i=0;i<n;i++){
            ans = ans + dp[i];
        }
        return ans%mod;
        // return 1;
    }
};