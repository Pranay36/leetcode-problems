class Solution {
public:
    long long putMarbles(vector<int>& v, int k) {
        int n = v.size();
        vector<int> arr;
        if(k==1 || n==k)
            return 0;
        for(int i=0;i<n-1;i++){
            arr.push_back(v[i]+v[i+1]);
        }
        sort(arr.begin(),arr.end());
        long long mx =0;
        long long  mn =0;
        for(int i=0;i<k-1;i++){
            mn = mn + arr[i];
            mx = mx + arr[n-2-i];
        }
        return mx-mn;
    }
};