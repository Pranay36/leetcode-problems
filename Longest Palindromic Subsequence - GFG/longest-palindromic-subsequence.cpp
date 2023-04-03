//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  
    int f(string &temp,string &s, int i,int j,vector<vector<int>> &dp){
        if(i<0||j<0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(temp[i]==s[j]){
            return dp[i][j]= 1+ f(temp,s,i-1,j-1,dp);
        }
        return dp[i][j]= max(f(temp,s,i,j-1,dp),f(temp,s,i-1,j,dp));}
    
    int longestPalinSubseq(string s) {
        int n = s.size();
        string temp = s;
        vector<vector<int>> dp(n,vector<int>(n,-1));
        reverse(s.begin(),s.end());
        int x = f(temp,s,n-1,n-1,dp);
        return x;
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends