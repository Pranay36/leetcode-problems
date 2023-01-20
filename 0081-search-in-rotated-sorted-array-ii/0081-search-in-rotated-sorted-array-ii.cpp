class Solution {
public:
    bool search(vector<int>& v, int t) {
        int n = v.size();
        int l =0;
        int r =n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid]==t){
                return true;
            }
            if((v[l] == v[mid]) && (v[r] == v[mid]))
            {
                l++;
                r--;
            }
            else if(v[l]<=v[mid]){
                if(t>=v[l] &&t<=v[mid])
                    r=mid-1;
                else
                    l = mid+1;
                
            }
            else{
                if(t>=v[mid]&&t<=v[r])
                    l=mid+1;
                else{
                    r =mid-1;
                }
            }
            
            
        }
        return false;
    }
};