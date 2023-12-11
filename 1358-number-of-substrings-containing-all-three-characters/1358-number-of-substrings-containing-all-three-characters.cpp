class Solution {
public:
    int numberOfSubstrings(string s) {
        map<char,int> mp;
        int count=0;
        int j=0;
        int n= s.size();
        int c=0;
        for(int i=0;i<n;){
            mp[s[i]]++;
            while(mp['a']>=1 &&mp['b']>=1 && mp['c']>=1){
                count += n-i;
                // cout<<n-i<<endl;
                mp[s[j]]--;
                j++;
                
                // mp[s[i]]--;
                // i--;
            }
            i++;
        }
        
//         int i=0;
//         while(i<n){

//             if(mp['a']>=1 &&mp['b']>=1 && mp['c']>=1){
//                 count += n-i;
//                 cout<<n-i<<" ";
//                 mp[s[j]]--;
//                 j++;
//                 continue;
//             }
//             mp[s[i]]++;
//             i++;
//         }
//         cout<<endl;
        return count;
    }
};