class Solution {
public:
    int minOperations(int n) {
        vector<int> v;
        for(int i=0;i<n;i++){
            int  x = 2*(i)+1;
            v.push_back(x);
        }
        int sum=0;
        int m = (v[n-1]+1)/2;
        for(int i=0;i<n/2;i++){
            sum = sum+(m-v[i]);
        }
        cout<<sum;
        return sum;
    }
};