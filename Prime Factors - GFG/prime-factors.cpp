//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int n) {
	    vector<int>v;
	    while(n%2==0){
	        v.push_back(2);
	        n = n/2;
	    }
	    
	    for(int i=3;i<=sqrt(n);i=i+2){
	        while(n%i==0){
	            v.push_back(i);
	            n = n/i;
	        }
	    }
	    if(n>2){
	        v.push_back(n);
	    }
	    map<int,int>m;
	    for(auto x:v){
	        m[x]++;
	    }
	    vector<int> ans;
	    for(auto x:m){
	        ans.push_back(x.first);
	    }
	    sort(ans.begin(),ans.end());
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends