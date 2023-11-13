class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int i=0;
        int j =0;
        int mx =-1;
        int ans=-1;
        unordered_map<char,int> mp;
        if(n==0){
            return 0;
        }
        
        while(j<n){
            mp[s[j]]++;
            mx = max(mx,mp[s[j]]);
            
            if(j-i+1-mx>k){
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        
        return ans;
    }
};