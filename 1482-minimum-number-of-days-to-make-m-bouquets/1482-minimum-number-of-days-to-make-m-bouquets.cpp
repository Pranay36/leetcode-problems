class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int n = arr.size();
        long long  z = m*1LL*k*1LL;
        if(z>n){
            return -1;
        }
        int l =INT_MAX;
        int r =0;
        for(int i=0;i<n;i++){
            l = min(l,arr[i]);
            r = max(r,arr[i]);
        }
        int ans =r;
        while(l<=r){
            int mid = (l+r)/2;
            int j =0;
            int count =0;
            for(int i=0;i<n;i++){
                if(arr[i]<=mid){
                    j++;
                }
                else{
                    j=0;
                }
                if(j==k){
                    count++;
                    j=0;
                }
            }
            if(m==count){
                ans = mid;
                r = mid-1;
            }
            if(m>count){
                 l = mid+1;
            }
            else{
                r= mid-1;
            }
            
        }
        return ans;
    }
};