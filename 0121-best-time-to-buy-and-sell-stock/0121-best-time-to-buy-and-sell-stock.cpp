class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mins=prices[0];
        int ans=0;
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]<mins){
                mins= prices[i];
            }
            if(prices[i]-mins>ans){
                ans = prices[i]-mins;
            }
        }
     
        return ans;
    }
};