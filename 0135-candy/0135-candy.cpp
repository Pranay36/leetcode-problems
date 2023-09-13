class Solution {
public:
    int candy(vector<int>& v) {
     int n = v.size();
        vector<int> pre(n,1);
        vector<int> suf(n,1);
        
        for(int i=1;i<n;i++){
            if(v[i]>v[i-1]){
                pre[i] = pre[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(v[i]>v[i+1]){
                suf[i] = suf[i+1]+1;
            }
        }
        int ans =0;
        for(int i=0;i<n;i++){
            ans = ans + max(pre[i],suf[i]);
        }
        return ans;
    }
};