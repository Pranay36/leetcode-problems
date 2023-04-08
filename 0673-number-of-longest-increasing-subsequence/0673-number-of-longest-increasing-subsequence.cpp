class Solution {
public:
    int findNumberOfLIS(vector<int>& arr ) {
       int n = arr.size();
    
    vector<int> dp(n,1);
    vector<int> cnt(n,1);
    
    int mx = 1;
    
    for(int i=0; i<=n-1; i++){
        for(int prev_index = 0; prev_index <=i-1; prev_index ++){
            
            if(arr[prev_index]<arr[i] && dp[prev_index]+1>dp[i]){
                dp[i] = dp[prev_index]+1;
                cnt[i] = cnt[prev_index];
            }
            else if(arr[prev_index]<arr[i]&& dp[prev_index]+1 ==dp[i]){
                cnt[i]+=cnt[prev_index];
            }
            
        }
       
    }
         for(int i=0;i<n;i++){
            mx = max(mx,dp[i]);
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            if(dp[i]==mx){
                count = count+cnt[i];
            }
        }
        return count;
    
    }
};