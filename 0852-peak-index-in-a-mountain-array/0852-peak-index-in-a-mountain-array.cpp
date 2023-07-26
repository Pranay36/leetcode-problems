class Solution {
public:

        int peakIndexInMountainArray(vector<int>& arr) {
            int n = arr.size();
            int h = n-2;
            int l =1;
            int ans = 0;
            int x =-1;
            while(h>=l){
                int mid = (l+h)/2;
                if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                    ans = max(ans,arr[mid]);
                    x =mid;
                }
                if(arr[mid]<arr[mid-1]){
                    h = mid-1;
                }
                else
                    l = mid+1;
                
            }
            if(x==-1)
                return max(arr[0],arr[n-1]);
            return x;
    }
};