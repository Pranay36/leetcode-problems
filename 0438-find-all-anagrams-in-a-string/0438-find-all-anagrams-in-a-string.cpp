class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        vector<char>freq(26);
        vector<char> window(26);
        int n = s.size();
        int m = p.size();
        if(n < m) 
            return {};
        
        for(int i=0;i<m;i++){
            freq[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        if(window==freq){
            v.push_back(0);
        }
        
        for(int i=m;i<n;i++){
            window[s[i-m]-'a']--;
            window[s[i]-'a']++;
            if(window==freq){
                v.push_back(i-m+1);
            }
            
        }
        return v;
    }
};