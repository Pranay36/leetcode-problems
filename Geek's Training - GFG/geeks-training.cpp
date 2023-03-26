//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int f(int n, int last, vector<vector<int>>&points,vector<vector<int>> &dp){
      if(n==0){
          int mx=0;
          for(int i=0;i<3;i++){
              if(i!=last)
              mx = max(points[n][i],mx);
          }
          return mx;
      }
      if(dp[n][last]!=-1){
          return dp[n][last];
      }
      
      int mx =0;
      for(int i=0;i<3;i++){
          if(i!=last){
          mx = max(mx,points[n][i]+f(n-1,i,points,dp));
          }
      }
      return dp[n][last] = mx;
  }
  
    int maximumPoints(vector<vector<int>>& points, int n) {
        
        int last=3;
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return f(n-1,last,points,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends