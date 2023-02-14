class Solution {
public:
    
    void solve(string &s,  vector<vector<string>> &ans, vector<string> &v,int i){
        if(i==s.size()){
            ans.push_back(v);
            return;
        }
        
        for(int j=i;j<s.size();j++){
            if(isp(i,j,s)){
                v.push_back(s.substr(i,j-i+1));
                solve(s,ans,v,j+1);
                v.pop_back();
            }
        }
    }
    
    bool isp(int i,int j,string &s){
        while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
            i++;
            j--;
        }
        return true;  
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        string p;
        vector<string> v;
        int i=0;
        solve(s,ans,v,i);
        return ans;
    }
};