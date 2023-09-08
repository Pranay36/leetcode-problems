class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v ={{1}};
        for(int i=1;i<n;i++){
            vector<int>a;
            a.push_back(1);
            for(int j=1;j<i;j++){
                a.push_back(v[i-1][j-1]+ v[i-1][j]);
            }
            a.push_back(1);
            v.push_back(a);
        }




        // for(int i=0;i<v.size();i++){
        //     for(int j=0;j<v[0].size();j++){
        //         cout<<v[i][j]<<" ";
        //     }
        // }
        return v;
    }
};