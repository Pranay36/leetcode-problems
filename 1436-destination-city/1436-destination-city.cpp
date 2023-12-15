class Solution {
public:
    string destCity(vector<vector<string>>& v) {
        map<string,int> mp;
        int n = v.size();
        for(int i=0;i<n;i++){
            mp[v[i][0]]++;
            mp[v[i][1]]++;
        }
        
        for(int i=0;i<n;i++){
            if(mp[v[i][1]]==1){
                return v[i][1];
            }
        }
        return "";
    }
};