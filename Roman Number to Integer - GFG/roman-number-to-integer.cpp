//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        int ans=0;
        int n  = str.size();
        map<char,int>m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        int i =0;
        for(i=0;i<n-1;i++){
            if(m[str[i]]<m[str[i+1]]){
                ans += m[str[i+1]]-m[str[i]];
                i++;
            }
            else{
                ans += m[str[i]];
            }
        }
        if(i!=n){
            ans += m[str[n-1]];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends