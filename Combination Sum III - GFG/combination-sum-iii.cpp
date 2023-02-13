//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> combinationSum(int k, int n) {
         vector<int>v;
        vector<vector<int>>ans;
        int i=1;
        int s=0;
        solve(v,ans,k,n,i,s);
        return ans;
    }
    void solve(vector<int> &v,vector<vector<int>>&ans,int k,int n,int i,int s){
        if(i==10){
            if(n==0&&v.size()==k){
                ans.push_back(v);
                return;
            }
            else{
                return;
            }
            
        }
        v.push_back(i);
        solve(v,ans,k,n-i,i+1,s);
        v.pop_back();
        solve(v,ans,k,n,i+1,s);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends