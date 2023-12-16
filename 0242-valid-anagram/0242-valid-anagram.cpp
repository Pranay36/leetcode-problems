class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        if(s.size()!=t.size())
            return false;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        
//         for(auto it:mp){
//             if(mp.find(it.first)==mp.end()){
//                 return false;
//             }
//             it.second--;
//             if(it.second==0){
//                 mp.erase(it.first);
//             }
//         }
        
        for(int i=0;i<t.size();i++){
            if(mp.find(t[i])==mp.end()){
                return false;
            }
            mp[t[i]]--;
            if(mp[t[i]]==0){
                mp.erase(t[i]);
            } 
        }
        return true;
    }
};