//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        vector<int> v;
        int sum =0;
        v.push_back(0);
        int mx=0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            sum = sum + a[i];
            if(sum==0){
                mx = i+1;
            }else{
                if(m.find(sum)!=m.end()){
                    mx = max(mx,i-m[sum]);
                }else{
                    m[sum]=i;
                }
            }
        }
       
        
        
        
        // cout<<l<<" "<<h<<endl;
        return mx;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends