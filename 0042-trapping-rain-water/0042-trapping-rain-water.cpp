class Solution {
public:
    int trap(vector<int>& v) {
        int n =v.size();
        vector<int> pre(n,0);
        vector<int> suf(n,0);
        int mx1=0;
        int mx2 = 0;
        for(int i=0;i<n;i++){
            mx1 = max(mx1,v[i]);
            pre[i]=mx1;
        }
        for(int i=n-1;i>=0;i--){
            mx2 = max(mx2,v[i]);
            suf[i]=mx2;
        }
        int sum =0;
        for(int i=0;i<n;i++){
            int x = min(pre[i],suf[i])-v[i];
            sum  +=x;
        }
        return sum;
    }
};