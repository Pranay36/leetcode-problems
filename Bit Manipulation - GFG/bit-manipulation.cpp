//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int getBit(int num,int i){
      return ((num & (1<<i))!=0);
  }
  int setBit(int num,int i){
      return (num|(1<<i));
  }
  int clearBit(int num,int i){
      int mask = ~(1<<i);
      return (num&mask);
  }
  
    void bitManipulation(int num, int i) {
        int x =getBit(num,i-1);
        int y= setBit(num,i-1);
        int z = clearBit(num,i-1);
        cout<<x<<" "<<y<<" "<<z;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends