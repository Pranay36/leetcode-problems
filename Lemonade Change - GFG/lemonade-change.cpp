//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &v) {
       if(v[0]!=5)
            return false;
        
        int sum = 0;
        int n = v.size();
        int cnt5 =0;
        int cnt10 =0;
        int cnt20 =0;
        
        for(int i=0;i<n;i++){
            if(v[i]==5){
                cnt5++;
            }
            if(v[i]==10){
                cnt10++;
                if(cnt5==0){
                    return false;
                }
                cnt5--;
            }
            if(v[i]==20){
                cnt20++;
                if(cnt5==0 || (cnt10==0 && cnt5<3)){
                    return false;
                }
                if(cnt10==0){
                    cnt5= cnt5-3;
                }
                else{
                    cnt5--;
                    cnt10--;
                }
            }
        }
        
        return true;
    }
   

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends