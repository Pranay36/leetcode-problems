//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> combinationSum2(vector<int> &can, int sum) {
        vector<int>v;
        vector<vector<int>> ans;
        int i=0;
        sort(can.begin(),can.end());
        solve(v,ans,can,sum,i);
        return ans;
    }
    void solve(vector<int>&v, vector<vector<int>>&ans, vector<int>& can,int sum,int ind){
            if(sum==0){
                ans.push_back(v);
                return;

            }
        
        
        for(int i= ind;i<can.size();i++){
            if(i>ind&&can[i]==can[i-1])
                continue;
            if(can[i]>sum)
                break;
            v.push_back(can[i]);
            solve(v,ans,can,sum-can[i],i+1);
            v.pop_back();
        }
     
        
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends