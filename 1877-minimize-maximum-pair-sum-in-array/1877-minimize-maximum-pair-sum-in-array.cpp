class Solution {
public:
    int minPairSum(vector<int>& num) {
        sort(num.begin(),num.end());
        
        int mx =-1;
        int n = num.size();
        int j=n-1;
        for(int i=0;i<n;i++){
            mx = max(mx,num[i]+num[j]);
            j--;
        }
        return mx;
    }
};