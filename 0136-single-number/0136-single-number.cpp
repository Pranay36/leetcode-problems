class Solution {
public:
    int singleNumber(vector<int>& v) {
        map<int, int> m;
        int n = v.size();
            for(int i=0;i<n;i++){
                m[v[i]]++;
            }
        for(auto x:m){
            if(x.second==1){
                return x.first;
            
        }
        }
        return 0;
        
    }
};