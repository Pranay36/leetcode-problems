//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        long long int ans = arr[0];
        for(int i=1;i<n;i++){
            ans = ans^arr[i];
        }
        vector<long long int> v;
        int setbit =0;
        for(int i=0;i<=31;i++){
            int mask = 1<<i;
            if((mask&ans)!=0){
                setbit = mask;
                break;
            }
        }
        int first=0;
        int second=0;
        for(int i=0;i<n;i++){
            if((setbit&arr[i])!=0){
                first=first^arr[i];
            }else{
                second = second^arr[i];
            }
        }
        v.push_back(first);
        v.push_back(second);
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        return v;
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends