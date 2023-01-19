class Solution {
public:
    int solve(vector<int>& nums , int l , int r, int target)
{
    int ans = -1;
    while(r >= l){
        int mid = (l+r)/2;
        if(nums[mid] == target)
        {
            return mid;
        }else{
            if(nums[mid] < target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
    }
    return ans;
}
    
    
    vector<int> searchRange(vector<int>& v, int k) {
        // int left,right;
        int n = v.size();
        int mid = solve(v,0,n-1,k);
        int l=mid;
        int r=mid;
        while(1){
            int left = solve(v,0,l-1,k);
            int right = solve(v,r+1,n-1,k);
            if(left==-1 &&right ==-1){
                break;
            }
            if(left!=-1){
                l = left;
            }
            if(right!=-1){
                r = right;
            }
        }
        
    return {l,r};    
    }
};