//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void immediateSmaller(vector<int>&nums, int n) {
// 	  int n = nums.size();
      vector < int > ans(n, -1);
      ans[n-1]=-1;
      if(n>1){
          for(int i=n-2;i>=0;i--){
              if(nums[i+1]<nums[i]){
                  ans[i] = nums[i+1];
              }else{
                  ans[i]=-1;
              }
          }
      }
      nums = ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends