class Solution {
public:
    int maxCoins(vector<int>& v) {
        v.push_back(1);
        v.insert(v.begin(),1);
        int n = v.size();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=n-2;i>=1;i--){
            for(int j = 1;j<n-1;j++){
                if(i>j)
                    continue;
                int mx= INT_MIN;
                for(int k=i;k<=j;k++){
                    int cost = v[k]*v[i-1]*v[j+1]+ dp[i][k-1]+dp[k+1][j];
                    mx = max(mx,cost);
                    // v.erase(v.begin()+k);
                }
                dp[i][j]=mx;
            }
        }
        return dp[1][n-2];
    }
};