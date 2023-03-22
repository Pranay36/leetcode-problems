//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isoperator(char x){
      switch(x){
          case '+':
          case '-':
          case '*':
          case '/':
          case '%':
          case '^':
             return true;
      }
      return false;
  }
    string preToPost(string s) {
        stack<string>st;
        int n = s.size();
        for(int i=n-1;i>=0;i--){
            if(isoperator(s[i])){
                string o1 = st.top();
                st.pop();
                string o2 = st.top();
                st.pop();
                
                string temp = o1+o2+s[i];
                st.push(temp);
            }
            else{
                st.push(string(1,s[i]));
            }
            
        }
        return st.top();
    }
    
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends