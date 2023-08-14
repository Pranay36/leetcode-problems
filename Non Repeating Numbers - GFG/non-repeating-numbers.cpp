//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
          int x=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        x=x^nums[i];  
      }
      
      int num=x&~(x-1);
      int one=0;
      int zero=0;
      for(int i=0;i<n;i++){
          if(nums[i]&num){
              one=one^nums[i];
          }
          else{
              zero=zero^nums[i];
          }
      }
      return {min(one,zero),max(one,zero)};
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
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends