class Solution {
public:
    bool isPowerOfTwo(int n) {
    for(int i=0;i<31;i++){
        int mask = 1<<i;
        if(n==0){
            return false;
        }
        if((n&mask)==n){
            // cout<<(n&mask)<<" ";
            return true;
        }
    }
        return false;
    }
};