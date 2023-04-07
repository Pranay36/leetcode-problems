//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> longestIncreasingSubsequence(int n, vector<int>& v) {
        
        vector<int> dp(n,1);
        vector<int> hash(n,0);
        
        for(int i=0;i<n;i++){
            hash[i]=i;
            for(int prev = 0;prev<i;prev++){
                if(v[prev]<v[i]&&1+dp[prev]>dp[i]){
                    dp[i] = 1+dp[prev];
                    hash[i]=prev;
                }
            }
        }
        
        vector<int>ans;
        int ind = -1;
        int mx =0;
        for(int i=0;i<n;i++){
            if(dp[i]>mx){
                mx = dp[i];
                ind = i;
            }
        }
        ans.push_back(v[ind]);
        
        while(hash[ind]!=ind){
            ind = hash[ind];
            ans.push_back(v[ind]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> res = obj.longestIncreasingSubsequence(N, arr);
        for (auto x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends