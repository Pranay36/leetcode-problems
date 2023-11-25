class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& num) {
        int n = num.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum += num[i];
        }
        int prev_sum=0;
        int nxt_sum = sum;
        int ans=0;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[i] = (n-i)*num[i]-nxt_sum;
            v[i] = v[i] - (i)*num[i] + prev_sum;
            prev_sum +=num[i];
            nxt_sum = nxt_sum-num[i];
        }
        for(int i=0;i<n;i++){
            v[i] = abs(v[i]);
        }
        return v;
    }
};