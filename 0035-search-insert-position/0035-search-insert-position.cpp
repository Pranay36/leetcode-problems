class Solution {
public:
    int searchInsert(vector<int>& num, int target) {
        int l = 0;
        int n = num.size();
        int h = n-1;
        bool f=false;
        int ans=-1;
        if(num[n-1]<target){
            ans=n;
        }
        else{
        while(l<=h){
            int mid = (l+h)/2;
            if(num[mid]==target){
                ans = mid;
                break;
            }
            else if(num[mid]<target){
                l = mid+1;
            }
            else{
                h = mid-1;
                ans = mid;
            }
        }
        }
        return ans;
    }
};