class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& num) {
        int n = num.size();
        vector<int> freq(n+1,0);
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            freq[num[i]]++;
        }
        
        for(int i=0;i<n;i++){
            vector<int> v;
            for(int j=0;j<=n;j++){
                if(freq[j]>0){
                    v.push_back(j);
                }
                freq[j]--;
            }
            
            if(v.size()!=0)
            ans.push_back(v);
            
        }
        return ans;
    }
};