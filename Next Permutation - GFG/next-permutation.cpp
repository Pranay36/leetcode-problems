//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
vector<int> nextPermutation(int n, vector<int> nums){
        // code here
         int indi=-1;
       // int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                indi=i;
                break;
            }
        
        }
       
        if(indi==-1)
        {
            reverse(nums.begin(),nums.end());
           
            return nums;
        }
       for(int i=n-1;i>=indi;i--)
       {
           if(nums[i]>nums[indi])
           {
               swap(nums[i],nums[indi]);
               break;
           }
       }
       reverse(nums.begin()+indi+1,nums.end());
       return nums;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends