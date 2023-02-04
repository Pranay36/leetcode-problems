class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        vector<int> arr(v.size(),0);
        int p=0;
        for(int i=0;i<v.size();i++){
            arr[i]=v[i]+p;
            p=p+v[i];
        }
        
        return arr;
    }
    
};