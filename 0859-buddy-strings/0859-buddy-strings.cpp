class Solution {
public:
    bool buddyStrings(string s, string g) {
        int n = s.size();
        int m=  g.size();
        if(n!=m)
            return false;
        
        if(s==g && set<char>(s.begin(),s.end()).size()<s.size()){
            return true;
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i]!=g[i])
                v.push_back(i);
        }
        
        return v.size()==2 && s[v[0]]==g[v[1]] && s[v[1]]==g[v[0]];
       
    }
};