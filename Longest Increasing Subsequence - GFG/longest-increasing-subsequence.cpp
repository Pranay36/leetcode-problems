//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int v[])
    {
       vector<int>temp;
       temp.push_back(v[0]);
       
       int len=1;
       for(int i=1;i<n;i++){
           if(v[i]>temp.back()){
               temp.push_back(v[i]);
               len++;
           }
           else{
               int ind  = lower_bound(temp.begin(),temp.end(),v[i])-temp.begin();
               temp[ind] = v[i];
           }
       }
       return len;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends