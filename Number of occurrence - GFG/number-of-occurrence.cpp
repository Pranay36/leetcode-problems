//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		int solve(int nums[] , int l , int r, int target)
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
		
	int count(int v[], int n, int x) {
	    int mid = solve(v,0,n-1,x);
	    int l,r;
	    int count=0;
	    if(mid!=-1){
	        count=1;
	        l= mid-1;
	        r=mid+1;
	        while(l>=0 && v[l]==x){
	            count++;
	            l--;
	        }
	        while(r<n&&v[r]==x){
	            count++;
	            r++;
	        }
	    }
	    return count;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends