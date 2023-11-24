class Solution {
public:
    int maxCoins(vector<int>& piles) {
       sort(piles.begin(),piles.end());
        reverse(piles.begin(),piles.end());
        int n = piles.size();
        int k = n/3;
        int ans = 0;
        for(int i=1;i<n;i=i+2){
            if(k==0)
                break;
            ans += piles[i];
            k--;
        }
        return ans;
    }
};