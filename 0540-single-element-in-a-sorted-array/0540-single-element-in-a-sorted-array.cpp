class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        int n = v.size();
        int l=0;
        int r=n-1;
        while(l<r){
            int mid =(l+r)/2;
            if(mid%2==0){
                if(v[mid]==v[mid+1]){
                    l=mid+2;

                }
                else{
                    r =mid;
                }
            }
            else{
                if(v[mid]==v[mid-1]){
                    l =mid+1;
                }
                else{
                    r=mid;
                }
                
            }
        }
        return v[l];
        
    }
};