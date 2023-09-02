class Solution {
public:
    
    int solve(int i, string s, unordered_map<string,bool> &mp, vector<int> &dp){
        if(i>=s.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        
        string cur = "";
        int res = s.size();
        for(int j = i;j<s.size();j++){
            cur = cur + s[j];
            int extracount = cur.size();
            if(mp[cur])
                extracount=0;
            extracount += solve(j+1,s,mp,dp);
            res = min(res,extracount);    
        }
        return dp[i] = res;
    }
    
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_map<string,bool> mp;
        for(auto it: dictionary){
            mp[it]= true;
        }
        int n = s.size();
        vector<int> dp(n,-1);
        int x =0;
        x = solve(0,s,mp,dp);
        return x;
    }
};