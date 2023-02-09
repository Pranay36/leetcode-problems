//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
    {
         int m = nums1.size(), n = nums2.size();
    if (m > n) {
        return MedianOfArrays(nums2, nums1);
    }
    
    int left = 0, right = m, median1, median2, i, j;
    while (left <= right) {
        i = (left + right) / 2;
        j = (m + n + 1) / 2 - i;
        
        if (j > 0 && i < m && nums2[j - 1] > nums1[i]) {
            left = i + 1;
        } else if (i > 0 && j < n && nums1[i - 1] > nums2[j]) {
            right = i - 1;
        } else {
            if (i == 0) {
                median1 = nums2[j - 1];
            } else if (j == 0) {
                median1 = nums1[i - 1];
            } else {
                median1 = max(nums1[i - 1], nums2[j - 1]);
            }
            
            if ((m + n) % 2 == 1) {
                return median1;
            }
            
            if (i == m) {
                median2 = nums2[j];
            } else if (j == n) {
                median2 = nums1[i];
            } else {
                median2 = min(nums1[i], nums2[j]);
            }
            
            return (median1 + median2) / 2.0;
        }
    }
    return -1;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends