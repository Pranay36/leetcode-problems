class Solution {
public:
    int search(vector<int>& num, int t) {
        int l=0;
        int n = num.size();
        int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(num[mid]==t){
                return mid;
            }
            
            if(num[l]<=num[mid]){
                if(num[l]<=t && num[mid]>=t){
                    r=mid-1;
                }
                else
                    l = mid+1;
            }
            else{
                if(num[r]>=t && num[mid]<=t){
                    l = mid+1;
                }
                else
                    r = mid-1;
            }
        }
        return -1;
    }
};