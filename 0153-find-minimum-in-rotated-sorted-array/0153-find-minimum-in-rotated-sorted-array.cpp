class Solution {
    
public:
    int findMin(vector<int>& v) {
        int n=v.size();
        int l = 0;
        int r = n-1;
        int mn = INT_MAX;
        while(l<=r){
            if(v[l]<v[r]){
                mn =min(mn,v[l]);
                break;
            }
            int mid =(l+r)/2;
            
            if(v[l]<=v[mid]){
                mn = min(mn,v[l]);
                l = mid+1;
            }else{
                mn = min(mn,v[mid]);
                r = mid-1;
            }
            
        }
        return mn;
    }
    
};