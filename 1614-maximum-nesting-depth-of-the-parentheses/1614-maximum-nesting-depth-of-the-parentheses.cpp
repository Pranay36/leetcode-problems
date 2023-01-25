class Solution {
public:
    int maxDepth(string s) {
      int count=0;
        int mx=0;
        int n  = s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
                mx = max(mx,count);
            }if(s[i]==')'){
                count--;
            }
        }
        return mx;
    }
};