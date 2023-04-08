//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int f(vector<int>&v, int i, int dec, int prev,int n,vector<vector<vector<int>>> &dp){
	    if(i==n){
	        return 0;
	    }
	    
	    if(dp[i][prev+1][dec]!=-1){
	        return dp[i][prev+1][dec];
	    }
	    int nottake=0;
	    int take =0;
	    if(dec==0&& v[i]>prev){
	        nottake = max(f(v,i+1,0,prev,n,dp),f(v,i+1,1,prev,n,dp));
	        take = 1+ max(f(v,i+1,0,v[i],n,dp),f(v,i+1,1,v[i],n,dp));
	    }
	    if(dec==1 && v[i]<prev){
	        nottake = f(v,i+1,1,prev,n,dp);
	        take = 1+ f(v,i+1,1,v[i],n,dp);
	    }
	    return dp[i][prev+1][dec]= max(take,nottake);
	}
	
	int LongestBitonicSequence(vector<int>&arr)
	{
	    int n = arr.size();
	    vector<int> dp1(n,1);
    vector<int> dp2(n,1);
    
    for(int i=0; i<=n-1; i++){
        for(int prev_index = 0; prev_index <=i-1; prev_index ++){
            
            if(arr[prev_index]<arr[i]){
                dp1[i] = max(dp1[i], 1 + dp1[prev_index]);
            }
        }
    }
    
    for(int i=n-1; i>=0; i--){
        for(int prev_index = n-1; prev_index >i; prev_index --){
            
            if(arr[prev_index]<arr[i]){
                dp2[i] = max(dp2[i], 1 + dp2[prev_index]);
            }
        }
    }
    
    int maxi = -1;
    
    for(int i=0; i<n; i++){
        maxi = max(maxi, dp1[i] + dp2[i] - 1);
    }
    
    return maxi;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends