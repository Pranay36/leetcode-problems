class Solution {
public:
    vector<vector<int>> subsets(vector<int>& num) {
        vector<vector<int>> ans;
        int x = pow(2,num.size());
        for(int i=0;i<x;i++){
            vector<int> v;
            int q = (x-1)&i;
            // cout<<q<<"-";
            for(int j=0;j<num.size();j++){
                int mask = 1<<j;
                // cout<<mask<<" ";
                if(i&(1<<j)){
                    v.push_back(num[j]);
                }
            }
            // cout<<endl;
            ans.push_back(v);
        }
        return ans;
    }
};