class Solution {
public:
    int numberOfSubarrays(vector<int>& num, int k) {
        int n = num.size();
        
        for(int i=0;i<n;i++){
            if(num[i]%2==0){
                num[i]=0;
            }else
                num[i]=1;
        }
        int count=0;
        int ans =0;
        map<int,int> mp;
        mp[0] = 1;
        int sum =0;
        for(int i=0;i<n;i++){
            sum +=num[i];
            int x = sum-k;
            if(mp.find(x)!=mp.end()){
                count += mp[x];
            }
            mp[sum]++;
        }
        return count;
    }
};