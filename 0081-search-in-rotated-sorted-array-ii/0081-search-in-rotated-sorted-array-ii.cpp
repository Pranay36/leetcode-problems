class Solution {
public:
    bool search(vector<int>& num, int t) {
        int n  = num.size();
        int l=0;
        int r= n-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            
            if(num[mid]==t){
                return true;
            }
            if((num[l] == num[mid]) && (num[r] == num[mid]))
            {
                l++;
                r--;
            }
            else if(num[l]<=num[mid]){
                if(num[mid]>=t && num[l]<=t){
                    r = mid-1;
                }
                else{
                    l= mid+1;
                }
            }else{
                if(num[mid]<=t&& num[r]>=t){
                    l = mid+1;
                }else{
                    r = mid-1;
                }
            }
        }
        return false;
    }
};