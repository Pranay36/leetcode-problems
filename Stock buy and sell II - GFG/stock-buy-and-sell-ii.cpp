//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  
  
    int f(vector<int>&price, int i, vector<vector<int>>&dp, int buy){
        if(i==price.size()){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        
        if(buy==1){
            return dp[i][buy] = max(-price[i]+f(price,i+1,dp,0), f(price,i+1,dp,1));
            
        }
        return dp[i][buy] =  max(price[i]+f(price,i+1,dp,1), f(price,i+1,dp,0));
        
        
        
    }
    
    
    int stockBuyAndSell(int n, vector<int> &price) {
        vector<vector<int>>dp(n, vector<int> (2,-1));
        int buy =1;
        int ans = f(price,0,dp,buy);
        return ans;
    }
    
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> prices(n);
        Array::input(prices,n);
        
        Solution obj;
        int res = obj.stockBuyAndSell(n, prices);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends