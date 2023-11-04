class Solution {
public:
    int getLastMoment(int n, vector<int>& l, vector<int>& r) {
        int k = l.size();
        int m  = r.size();
        int ans =0;
        for(int i=0;i<k;i++){
            ans = max(ans,l[i]);
        }
        for(int i=0;i<m;i++){
            ans = max(ans,n-r[i]);
        }
        return ans;
    }
};