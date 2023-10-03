class Solution {
public:
    int numIdenticalPairs(vector<int>& num) {
        int n = num.size();
        map<int,int> mp;
        mp[num[0]]++;
        for(int i=1;i<n;i++){
            mp[num[i]]++;
        }
        int ans =0;
        for(auto it:mp){
            if(it.second>=2){
                ans = ans+ it.second*(it.second-1)/2;
            }
        }
        return ans;
    }
};