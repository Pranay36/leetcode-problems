class Solution {
public:
       
    int longestSubsequence(vector<int>& v, int d) {
        int n = v.size();
        unordered_map<int,int> m;
        int mx =0;
        for(int i=0;i<n;i++){
            int x = v[i];
            if(m.find(x-d)!=m.end()){
                m[x] = m[x-d]+1;
            }
            else
                m[x]=1;
            mx = max(m[x],mx);
        }
        return mx;
    }
};