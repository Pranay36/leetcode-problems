class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
//         int n = arr.size();
//         map<int,int> mp;
//         for(int i=0;i<n;i++){
//             mp[arr[i]]++;
//         }
//         vector<vector<int>> v;
//         int m = mp.size(); 
//         for(auto it:mp){
//             int k = it.first;
//             vector<int> ds;
            
//             int x = it.second/it.first;
//             while(x!=0){
//             for(int j=0;j<n;j++){
//                 if(arr[j]==it.first&& k!=0){
//                     ds.push_back(j);
//                     arr[j] =0;
//                     k--;
//                 }
//             }
//             x--;
//             v.push_back(ds);    
//         }   
//         }
        
//         return v;
        
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>m;
        for(int i=0;i<g.size();i++)
        {
			m[g[i]].push_back(i);
            cout<<m[g[i]].size()<<" ";
			if(m[g[i]].size()==g[i])
            {
                ans.push_back(m[g[i]]);
                m[g[i]].clear();
            }
        }
        return ans;
    }
};