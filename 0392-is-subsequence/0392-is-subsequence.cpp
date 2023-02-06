class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int  n=t.size(),m = s.size();
        while(i<m && j<n){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            if(s[i]!=t[j]){
                j++;
            }
        }
        if(i==m){
            return true;
        }
        return false;
    }
};