class Solution {
public:
    int reverse(int x){
        int ans =0;
        while(x>0){
            ans = ans*10 + x%10;
            x = x/10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& num) {
        int mod = 1000000007;
        int n = num.size();
        long long int ans=0;
        vector<int> v(n,0);
        for(int i=0;i<n;i++){
            v[i] = reverse(num[i]);
        }
        vector<int> dif(n,0);
        for(int i=0;i<n;i++){
            dif[i] = num[i]-v[i];
        }
        // for(int i=0;i<n;i++){
        //     cout<<dif[i]<<" ";
        // }
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[dif[i]]++;
        }
        for(auto it:mp){
            int i = it.second;
            if(i>2){
                
                long long int z = i;
                z=z*(i-1)/2;
                ans += z;
            }
            
            if(i==2){
                ans++;
            }
        }
        // cout<<endl;
        return ans%mod;
    }
};