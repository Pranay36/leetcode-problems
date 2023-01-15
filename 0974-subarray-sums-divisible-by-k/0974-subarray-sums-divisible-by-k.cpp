class Solution {
public:
    int subarraysDivByK(vector<int>& num, int k) {
        int n = num.size();
        int sum =0;
        vector<int>v(k);
        int ans=0;
        v[sum]++;
        for(int i=0;i<n;i++){
            sum = (sum+num[i])%k;
            if(sum<0){
                sum = sum+k;
            }
            ans =ans + v[sum];
            v[sum]++;
        }
        
       return ans; 
        
    }
};