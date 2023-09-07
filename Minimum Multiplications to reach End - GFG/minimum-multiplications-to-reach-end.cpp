//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        queue<pair<int,int>> q;
        vector<int> v(100000,1e9);
        q.push({start,0});
        v[start]=0;
        int mod = 100000;
        if(start==end){
            return 0;
        }
        while(q.size()!=0){
            auto p = q.front();
            int node = p.first;
            int step = p.second;
            q.pop();
            
            for(auto it:arr){
                int x = (node*it)%mod;
                
                if(step+1<v[x]){
                    v[x] = step+1;
                    if(x==end){
                    return step+1;
                }
                    q.push({x,step+1});
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends