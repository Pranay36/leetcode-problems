class Solution {
public:
    string reverseWords(string s) {
        string ans ="";
        s.push_back(' ');
        vector<string> v;
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                str.push_back(s[i]);
            }
            if(s[i]==' ' && str.size()>0){
                v.push_back(str);
                str = "";
            } 
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            ans +=v[i];
            ans +=' ';
        }
        ans.pop_back();
        
        return ans;
    }
};