class Solution {
public:
    void solve(string digit,unordered_map<char,string>&m,vector<string> &ans,string s,int i){
        if(i==digit.size()){
            ans.push_back(s);
            return;
        }
      string temp = m[digit[i]];
        for(int j=0;j<temp.size();j++){
            s.push_back(temp[j]);
            solve(digit,m,ans,s,i+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digit) {
        vector<string> ans;
        string s;
        if(digit.size() == 0)
            return {} ;
        unordered_map<char,string>m;
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        
        int i=0;
        solve(digit,m,ans,s,i);
        return ans;
        
    }
};