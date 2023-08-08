//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    // int solve(vector<int> &arr, int k,int i,int j){
    //     if(i>=j || arr[j]-arr[i]<=k){
    //         return 0;
    //     }
        
    //     return 1 +  min(solve(arr,k,i,j-1), solve(arr,k,i+1,j));
        
    // }
    
    int removals(vector<int>& arr, int k){
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int a[n] ={0};
        for(int i=0;i<n;i++){
            a[i] = arr[i];
        }
        int ans = n-1;
        for(int i=0;i<n;i++){
            int x = a[i]+k;
            int j = upper_bound(a+i, a+n, x) - a-1;
            ans = min(ans, n-(j-i+1));
        }
        return ans;
        
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends