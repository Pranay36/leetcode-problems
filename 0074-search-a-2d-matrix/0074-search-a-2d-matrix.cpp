class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int n = v.size();
        int l = 0;
        int m = v[0].size();
        int r= (m*n)-1;

        
        
        while(l<=r){
            int mid  = (l+r)/2;
            if(v[mid/m][mid%m]==t){
                return true;
            }
            if(v[mid/m][mid%m]>t){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return false;
    }
};