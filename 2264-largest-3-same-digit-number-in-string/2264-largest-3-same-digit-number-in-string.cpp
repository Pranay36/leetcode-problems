class Solution {
public:
    
    bool check(string s){
        if(s[0]==s[1]&&s[0]==s[2]){
            return true;
        }
        return false;
    }
    
    string largestGoodInteger(string num) {
        int n = num.size();
        string ans ="";
        for(int i=0;i<n-2;i++){
            string r = num.substr(i, 3);
            if(check(r) && r[0]>ans[0]){
                ans = r;
            }
        }
        return ans;
    }
};