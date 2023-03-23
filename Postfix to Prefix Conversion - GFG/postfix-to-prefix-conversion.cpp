//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool isOperator(char x)
{
    switch (x) {
    case '+':
    case '-':
    case '/':
    case '*':
        return true;
    }
    return false;
}

    string postToPre(string s) {
        stack<string> st;
        int n = s.size();
        
        for(int i=0;i<n;i++){
            char x = s[i];
            
            if(isOperator(x)){
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                
                string temp = x+b+a;
                st.push(temp);
            }else{
                st.push(string(1, x));
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
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends