//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    bool isOperand(char x)
{
   return (x >= 'a' && x <= 'z') ||
          (x >= 'A' && x <= 'Z');
}
 
// Get Infix for a given postfix
// expression
string postToInfix(string exp)
{
    stack<string> s;
 
    for (int i=0; exp[i]!='\0'; i++)
    {
        // Push operands
        if (isOperand(exp[i]))
        {
           string op(1, exp[i]);
           s.push(op);
        }
 
        // We assume that input is
        // a valid postfix and expect
        // an operator.
        else
        {
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();
            s.push("(" + op2 + exp[i] +
                   op1 + ")");
        }
    }
 
    // There must be a single element
    // in stack now which is the required
    // infix.
    return s.top();
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
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends