//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int solve(vector<int> &price, vector<vector<vector<int>>>&dp , int n, int i, int buy, int count){
    if(count==2){
        return 0;
    }
    if(i==n){
        return 0;
    }
    
   
    if(dp[i][buy][count]!=-1){
        return dp[i][buy][count];
    }
    
    if(buy==0){
        return dp[i][buy][count]=  max(-price[i] + solve(price,dp,n,i+1,1,count), solve(price,dp,n,i+1,0,count)); 
    }
    else{
        return dp[i][buy][count]=  max(price[i] + solve(price,dp,n,i+1,0,count++), solve(price,dp,n,i+1,1,count++));
    }
    
}
int maxProfit(vector<int>&price){
    int n = price.size();
    vector<vector<vector<int>>> dp( n, vector<vector<int>> (2,vector<int> (2,-1)));
    int buy=0;
    int count=0;
    int x = solve(price,dp,n,0,buy,count);
    return x;
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends