//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
             int i=0;
             int j=0;
             int k = n-1;
             while(i<n && j<m){
                 if(arr1[i]>arr2[j]){
                     long long x = arr1[k];
                     arr1[k]=arr2[j];
                     k--;
                     arr2[j]=x;
                    //  i++;
                     j++;
                 }
                 else{
                     i++;
                     
                 }
                //  j++;
             }
             sort(arr1,arr1+n);
             sort(arr2,arr2+m);
             return;
        } 
        
//         2 8
// 1 35
// 6 9 13 15 20 25 29 46

// 2 8
// 12 42
// 3 4 5 28 37 42 43 46
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends