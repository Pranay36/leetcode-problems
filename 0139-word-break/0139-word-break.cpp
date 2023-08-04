class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        unordered_set<string> m;
        for(auto x:wordDict){
            m.insert(x);
        }
        vector<bool> dp(n+1,0);
        dp[0]=true;
        
        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j]){
                string word = s.substr(j,i-j);
                if(m.find(word)!=m.end()){
                    dp[i]=true;
                    break;
                }
                }
            }
        }
        return dp[n];
        
    }
};