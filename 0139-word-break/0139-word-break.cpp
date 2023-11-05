class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> x;
        for(auto it:wordDict){
            x.insert(it);
        }
        int n = s.size();
        vector<int> v(n+1,0);
        v[0] = 1;
        for(int i=1;i<=n;i++){
            for(int j=i-1;j>=0;j--){
                if(v[j]){
                    string temp = s.substr(j,i-j);
                    if(x.find(temp)!=x.end()){
                        v[i] =1;
                        break;
                    }
                }
            }
        }
        cout<<v[n];
        return v[n];
        
    }
};