class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n  = s.size();
        
        if(n==1|| n==0){
            return n;
        }
        map<char,int> mp;
        mp[s[0]]++;
        int i=0;
        int j= 1;
        int count=1;
        int ans =1;
        
        while(i<n &&j<n){
            if(mp.find(s[j])!=mp.end()){
                ans = max(ans,count);
                mp.clear();
                i++;
                j=i;
                mp[s[j]]++;
                count =1;
            }else{
                mp[s[j]]++;
                count++;
            }
            j++;
        }
        
//         for(int i=1;i<n;i++){
//             if(mp.find(s[i])!=mp.end()){
//                 ans = max(count,ans);
//                 // mp.clear();
//                 mp.erase(s[j]);
//                 j++;
//                 count=1;
//                 mp[s[i]];
//             }else{
//             count++;
//             mp[s[i]]++;}
            
//         }
        
        
        ans = max(count,ans);
        return ans;
    }
};