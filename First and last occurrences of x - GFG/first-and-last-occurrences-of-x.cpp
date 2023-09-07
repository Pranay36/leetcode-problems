//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int r = n-1;
        int l = 0;
        int mn =INT_MAX;
        int mx =-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid]==x){
                mn = min(mn,mid);
                r=mid-1;
                
            }
            if(arr[mid]>x){
                r= mid-1;
            }
            if(arr[mid]<x){
                l = mid+1;
            }
        }
        l = 0;
        r=n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid]==x){
                mx = max(mx,mid);
                l=mid+1;
                
            }
            if(arr[mid]>x){
                r= mid-1;
            }
            if(arr[mid]<x){
                l = mid+1;
            }
        }
        if(mn == INT_MAX)
        mn =-1;
        return {mn,mx};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends