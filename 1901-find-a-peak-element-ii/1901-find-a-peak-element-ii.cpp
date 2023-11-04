class Solution {
public:
    // int mx(vector<int> &v){
//         int l = 0;
//         int r  = v.size()-1;
        
//         while(l<=r){
//             int mid  = (l+r)/2;
//             if()
//         }
//     }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int  l =0;
        int r = m-1;
        
        while(l<=r){
            int mid = (l+r)/2;
            int mx =0;
            int row =0;
            for(int i=0;i<n;i++){
                if(mx<mat[i][mid]){
                    mx = mat[i][mid];
                    row = i;
                }
            }
            int left = mid-1>=0 ? mat[row][mid-1]:-1;
            int right = mid+1<m ? mat[row][mid+1]:-1;
            if(mx>left &&mx>right){
                return {row,mid};
            }
            else if(right>mx){
                l = mid+1;
            }else{
                r = mid-1;
            }
            
        }
        return {0,0};
        
    }
};