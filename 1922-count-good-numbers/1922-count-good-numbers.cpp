#define mod 1000000007
class Solution {
public:
    
    long long mpow(int x, long long n) {
        if(n==0){
            return 1;
        }
        long long ans = mpow(x,n/2);
        ans = ans*ans;
        ans = ans%mod;
        if(n%2==1){
            ans = ans*x;
        }
        ans = ans%mod;
        return ans;
    }
    
    int countGoodNumbers(long long n) {
        return(mpow(5,(n/2+n%2))*mpow(4,n/2))%mod;
    }
};