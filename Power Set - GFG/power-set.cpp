//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	void solve(string& num, vector<string>&ans, string v,int ind){
        if(ind==num.size()){
            ans.push_back(v);
            return;
        }
        
        
        v.push_back(num[ind]);
        solve(num,ans,v,ind+1);
        v.pop_back();
        solve(num,ans,v,ind+1);
        return;
    }
    
		vector<string> AllPossibleStrings(string s){
		vector<string> ans;
        string v="";
        int ind=0;
        solve(s,ans,v,ind);
        sort(ans.begin(),ans.end());
        ans.erase(ans.begin());
        return ans;
		}
		
	
    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends