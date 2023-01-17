class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
         vector<vector<int>> vec;
        vector<pair<int,int>>p;
        sort(v.begin(),v.end());
        if(v.size()==0){
        return vec;
        }
        vector<int>temp = v[0];
        
        for(auto it :v){
            if(it[0]<=temp[1]){
                temp[1] = max(it[1],temp[1]);
            }
            else{
                vec.push_back(temp);
                temp = it;
            }
        }
        vec.push_back(temp);

        return vec;
        
        
    }
};