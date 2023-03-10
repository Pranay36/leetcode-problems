//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        
        int r[n];
        r[n-1] = a[n-1];
        for(int i=n-2;i>=0;i--){
            r[i] = max(a[i],r[i+1]);
        }
       
        int mx = 0;
        int i=0;
        int j=0;
        
        while(i<n && j<n){
            if(r[j]>=a[i]){
                mx =max(mx,j-i); 
                j++;
            }
            else
                i++;
        }
        return mx;
    }
};

         

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends