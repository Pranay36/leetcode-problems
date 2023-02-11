class Solution {
public:
    void solve(int n, vector<string> &v, int open,int close,string &s){
        if(2*n==s.size()){
            v.push_back(s);
            return;
        }
        if(open<n){
            s = s+'(';
            solve(n,v,open+1,close,s);
            s.pop_back();
        }
        if(close<open){
            s=s+')';
            solve(n,v,open,close+1,s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string x = "";
        int open =0;
        int close =0;
        solve(n,v,open,close,x);
        return v;
    }
};