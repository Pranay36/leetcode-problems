//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    vector<vector<int>> printUniqueSubsets(vector<int>& num) {
        vector<vector<int>> ans;
        vector<int>v;
        int i=0;
        sort(num.begin(),num.end());
        solve(i,v,ans,num);
        return ans;
    }
    void solve(int ind,vector<int>&v,vector<vector<int>>&ans,vector<int>&num){
        // if(ind==num.size()){
        //     ans.push_back(v);
        //     return;
        // }
        ans.push_back(v);
        for(int i=ind;i<num.size();i++){
            if(i>ind && num[i]==num[i-1])
                continue;
            v.push_back(num[i]);
            solve(i+1,v,ans,num);
            v.pop_back();
        }
        return;
    }
   
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends