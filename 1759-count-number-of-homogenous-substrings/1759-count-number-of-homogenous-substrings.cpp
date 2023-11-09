class Solution {
public:
    int countHomogenous(string s) {
        int mod = 1000000007;
        int n = s.size();
        char cur=s[0];
        long long count=1;
        int ans =0;
        for(int i=1;i<n;i++){
            if(cur==s[i]){
                count++;
            }else{
                ans += (count*(count+1)/2)%mod;
                // cout<<ans<<endl;
                cur = s[i];
                count =1;
            }
        }
        ans += (count*(count+1)/2)%mod;
        return ans%mod;
    }
};