class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[i] = arr[i];
        }
        sort(v.begin(),v.end());
        int count=0;
        if(v[0]!=1){
            v[0]=1;
            count++;
        }
        for(int i=1;i<n;i++){
            if(abs(v[i]-v[i-1])>1){
                v[i] = v[i-1]+1;
            }
        }
        
        return v[n-1];
    }
};