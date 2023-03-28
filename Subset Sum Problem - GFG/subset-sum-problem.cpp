//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
     bool f(int i,vector<int>&v, int sum,vector<vector<int>> &dp){
         int n = v.size();
         if(sum==0){
             return true;
         }
         if(i==0){
             return (v[i]==sum);
         }
         if(dp[i][sum]!=-1){
             return dp[i][sum];
         }
         
         bool nottake = f(i-1,v,sum,dp);
         bool take = false;
         if(v[i]<=sum){
             take = f(i-1,v,sum-v[i],dp);
         }
         
         return dp[i][sum]= nottake||take;
         
     }
    bool isSubsetSum(vector<int>v, int sum){
         int n = v.size();
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
       
        int i=n-1;
        
        bool x = f(i,v,sum,dp);
        return x;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends