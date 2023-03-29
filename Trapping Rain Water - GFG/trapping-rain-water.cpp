//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
   long long trappingWater(int a[], int n){
        long long start = 0,end = n-1,leftmax = a[0],rightmax = a[n-1],ans=0;
        while(start<end){
            if(leftmax<rightmax){
                start++;
                if(a[start]>leftmax)
                leftmax = a[start];
                ans+=leftmax-a[start];
            }
            else{
                end--;
                if(a[end]>rightmax)
                rightmax = a[end];
                ans+=rightmax-a[end];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends