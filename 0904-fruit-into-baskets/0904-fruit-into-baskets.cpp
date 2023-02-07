class Solution {
public:
    int totalFruit(vector<int>& f) {
        unordered_map<int,int>m;
        map<int,int>emp;
        int mx =0;
        int ans=0;
        int n = f.size();
        for(int i=0,j=0;j<n;j++){
            m[f[j]]++;
            if(m.size()>2){
                m[f[i]]--;
                if(m[f[i]]==0)
                    m.erase(f[i]);
                i++;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};