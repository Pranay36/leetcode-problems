//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long k)
    {
        // int  n  = arr.size();
        if(k==0){
            
        }
        int sum = 0;
        int i=0;
        int j =1;
        sum = arr[i];
        while(j<=n&&i<=n){
            if(sum==k){
                if(k==0 &&i==1&&j==1){
                    return{-1};
                }
                return {i+1,j};
            }
            else if(sum<k){
                sum = sum+arr[j];
                j++;
            }
            else if(sum>k){
                sum = sum-arr[i];
                i++;
            }
        }
        return{-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends