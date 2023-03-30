//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int mod =(int)1e9+7;
  public:
    int f(vector<int>&arr,int i,int sum, vector<vector<int>>&dp){
        if(i==0){
        if(sum==0&&arr[0]==0){
            return 2;
        }
        else if(sum==0 || arr[0]==sum){
            return 1;
        }
        else
        return 0;
        }
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        int nottake = f(arr,i-1,sum,dp)%mod;
        int take=0;
        if(arr[i]<=sum)
           take = f(arr,i-1,sum-arr[i],dp)%mod;
        return dp[i][sum]=(take+nottake)%mod;
        
    }
    
  
    int countPartitions(int n, int d, vector<int>& arr) {
        int sum =0;
        for(int i=0;i<n;i++){
            sum +=arr[i];
        }
         if((sum-d)<0) return 0;
        if((sum-d)%2!=0){
            return 0;
        }
        int k = (sum-d)/2;
        vector<vector<int>>dp(n, vector<int>(k+1 ,-1));
        
        int x=f(arr,n-1,k,dp);
        return x;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends