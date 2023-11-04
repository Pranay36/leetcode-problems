class Solution {
public:
    
    // bool find(vector<int> &v,int k){
    //     int l =0;
    //     int r = v.size()-1;
    //     while(l<=r){
    //         int mid = (l+r)/2;
    //         if(v[mid]==k)
    //             return true;
    //         else if(k>v[mid]){
    //             l = mid+1;
    //         }else{
    //             r=mid-1;
    //         }
    //     }
    //     return false;
    // }
    
    bool searchMatrix(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        // bool ans =false;
        // for(auto it:matrix){
        //     vector<int> v = it;
        //     ans = find(v,k);
        //     if(ans ==true)
        //         return true;
        // }
        // return false;
        
        int m  =matrix[0].size();
        int i=0;
        int j = m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==k){
                return true;
            }
            else if(matrix[i][j]<k){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};