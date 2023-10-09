class Solution {
public:
    vector<int> searchRange(vector<int>& num, int x) {
        int n = num.size();
        int l =0;
        int r = n-1;
        int p =INT_MAX;
        int q = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(num[mid]==x){
                p = min(mid,p);
                // q = max(mid,p);
                r= mid-1;
            }
            if(num[mid]>x){
                r = mid-1;
            }
            if(num[mid]<x){
                l = mid+1;
            }
            
        }
        l=0;
        r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(num[mid]==x){
                // p = min(mid,p);
                q = max(mid,p);
                l= mid+1;
            }
            if(num[mid]>x){
                r = mid-1;
            }
            if(num[mid]<x){
                l = mid+1;
            }
            
        }
        if(p==INT_MAX)
            p=-1;
        return{p,q};
    }
};