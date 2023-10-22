class Solution {
public:
    int maximumScore(vector<int>& num, int k) {
        int m = num[k];
        int ans = num[k];
        int n = num.size();
        int i=k;
        int j = k;
        while(i>0 || j<n-1){
            int left;
            int right;
            if(i>0)
                left = num[i-1];
            else
                left =0;
            
            if(j<n-1)
                right = num[j+1];
            else
                right =0;
            
            if(left>right){
                i--;
                m = min(m,num[i]);
                
            }
            else{
                j++;
                m = min(m,num[j]);
            }
            
            ans = max(ans,m*(j-i+1));
        }
        return ans;
    }
};