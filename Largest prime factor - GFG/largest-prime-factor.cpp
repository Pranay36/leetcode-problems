//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
        int  x = n;
        int ans =1;
        for(int i=2;i*i<=x;i++){
            if(n%i==0){
                while(n%i==0){
                    n = n/i;
                    // cout<<n;
                }
                ans = max(ans,i);
            }
        }
        
        return max(ans,n);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends