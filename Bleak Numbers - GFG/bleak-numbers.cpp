//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:

   unsigned int countone(int n){
        unsigned int count = 0;
        while (n) {
            count += n&1;
            n >>=1;
        }
        return count;
    }
        
    
	int is_bleak(int n)
	{
	   long long int i=0;
	   if(n>29){
	        i = n-29;
	   }
	   for(i;i<n;i++){
	       if(i + countone(i)==n){
	           //cout<<i<<endl;
	           return 0;
	       }
	   }
	   return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends