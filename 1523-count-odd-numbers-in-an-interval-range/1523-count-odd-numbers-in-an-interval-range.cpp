class Solution {
public:
    int countOdds(int l, int h) {
        int ans = (h-l)/2;
        if(l%2!=0 || h%2!=0){
            ans++;
        }
        return ans;
    }
};