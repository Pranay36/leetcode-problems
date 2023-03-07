class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int ans=0;
        int n = prices.size();
        for(int i=0;i<n;i++){
            mn = min(mn,prices[i]);
            ans = max(ans,prices[i]-mn);
        }
        return ans;
    }
};