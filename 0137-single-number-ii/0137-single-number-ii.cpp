class Solution {
public:
    int singleNumber(vector<int>& num) {
        int n = num.size();
        int x;
        long ans=0;
        int p=0;
        for(int i=0;i<32;i++){
            int t=0;
            for(int j=0;j<n;j++){
                x = num[j]&1;
                t = t+x;
                num[j] = num[j]>>1;
            }
            t=t%3;
            ans = ans+ t*pow(2,p);
            p++;
        }
        return ans;
    }
};