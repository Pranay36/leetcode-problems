class Solution {
public:
    long long mod = 1000000007;
    
    int countOrders(int n) {
        int slot = 2*n;
        long long ans =1;
        while(slot>0){
            long long x = slot*(slot-1)/2;
            ans = (ans*x)%mod;
            slot = slot-2;
        }
        return ans%mod ;
    }
};