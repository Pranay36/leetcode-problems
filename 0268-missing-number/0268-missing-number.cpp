class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]!=i){
                return i;
            }
        }
        return n;
    }
};