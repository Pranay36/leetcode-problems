class Solution {
public:
    vector<int> shuffle(vector<int>& v, int n) {
        vector<int> a;
        for(int i=n;i<2*n;i++){
            a.push_back(v[i-n]);
            a.push_back(v[i]);
        }
        
        return a;
    }
};