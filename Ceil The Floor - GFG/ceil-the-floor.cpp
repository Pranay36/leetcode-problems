//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int v[], int n, int x) {
    sort(v,v+n);
     int l = 0;
        int h  = n-1;
        int ans;
        if(x<v[0]){
            ans = -1;
        }
        else{
            while(l<=h){
            int mid = (l+h)/2;
            if(v[mid] == x)
	        {
	            ans = v[mid];
	            break;
	        }
            else if(v[mid]<x){
                l = mid+1;
                ans = v[mid];
            }else{
                h = mid-1;
            }
        }
        }
        
        int cel;
        l=0;
        h= n-1;
        if(x>v[n-1]){
            cel = -1;
        }else{
            while(l<=h){
                int mid = (l+h)/2;
                if(v[mid]==x){
                    cel = v[mid];
                    break;
                }
                else if(v[mid]<x){
                    l = mid+1;
                }
                else{
                    h = mid-1;
                    cel = v[mid];
                }
            }
        }
        pair<int,int> p ;
        p.first = ans;
        p.second = cel;
        
        
        return p;
}