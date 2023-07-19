//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
 
      int longestPalinSubseq(string s) {
        int l = s.length();
        string a = s;  // reverse of the string s we are storing in string a
        reverse(a.begin(), a.end());

        vector<int> curr(l+1,0);
        vector<int> next(l+1,0);
        
        for(int i=l-1; i>=0; i--)
        {
            for(int j=l-1; j>=0; j--)
            {
                int ans = 0;
                if(a[i] == s[j]) ans = 1 + next[j+1];

                else ans = max(next[j], curr[j+1]);
                curr[j] = ans;
            }
            next = curr;
        }
        return next[0];
    }
    
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends