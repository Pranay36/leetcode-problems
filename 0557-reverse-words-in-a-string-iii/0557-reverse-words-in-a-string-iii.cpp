class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int j =0;
        string  ans ="";
        string temp ="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                temp +=s[i];
            }else{
                reverse(temp.begin(),temp.end());
                ans += temp;
                ans.push_back(' ');
                temp ="";
            }
        }
        reverse(temp.begin(),temp.end());
        ans += temp;
        return ans;
    }
};