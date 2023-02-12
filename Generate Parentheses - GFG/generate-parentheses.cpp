//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void solve(int n, vector<string> &v, int open,int close,string &s){
        if(2*n==s.size()){
            v.push_back(s);
            return;
        }
        if(open<n){
            s = s+'(';
            solve(n,v,open+1,close,s);
            s.pop_back();
        }
        if(close<open){
            s=s+')';
            solve(n,v,open,close+1,s);
            s.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
         vector<string> v;
        string x = "";
        int open =0;
        int close =0;
        solve(n,v,open,close,x);
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
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends