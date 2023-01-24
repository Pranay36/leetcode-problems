class Solution {
public:
    string largestOddNumber(string s) {
        int k=-1;
        for(int i=s.size()-1;i>=0;i--){
            int x = int(s[i]);
            if(x%2!=0){
                k=i;
                break;
            }
        }
        string ans;
        for(int i=0;i<=k;i++){
            ans.push_back(s[i]);
        }
        return ans;
    }
};