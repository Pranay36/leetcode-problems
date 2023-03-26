//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int n, int m)
    {
        int count;
        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 &&j==0){
                    dp[i][j]=1;
                }
                else{
                int up = 0;
                int right =0;
                if(i>0){
                    up = dp[i-1][j];
                }
                if(j>0){
                    right = dp[i][j-1];
                }
                dp[i][j] = up+right;
                }
            }
        }
        return dp[n-1][m-1];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends