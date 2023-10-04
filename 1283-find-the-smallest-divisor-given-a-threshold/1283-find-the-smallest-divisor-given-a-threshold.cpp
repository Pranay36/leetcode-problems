class Solution {
public:
    int smallestDivisor(vector<int>& num, int threshold) {
        int l = 1;
        int r = 1000000;
        int ans=INT_MAX;
        int n  =num.size();
        while(l<=r){
            int mid = (l+r)/2;
            int temp = 0;
            for(int i=0;i<num.size();i++){
                if(num[i]%mid==0){
                    temp+=(num[i]/mid);
                } else{
                    temp+=(num[i]/mid)+1;
                }
            }
            if(temp<=threshold){
                ans = min(mid,ans);
                r= mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};