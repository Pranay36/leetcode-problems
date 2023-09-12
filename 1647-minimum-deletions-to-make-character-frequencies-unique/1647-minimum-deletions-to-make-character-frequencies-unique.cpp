class Solution {
public:
    int minDeletions(string s) {
        map<char,int> mp;
        int mx_f = 0;
        for(auto it:s){
            mp[it]++;
            if(mp[it]>mx_f){
                mx_f=mp[it];
            }
        }
        map<int,int> mk;
        for(auto it:mp){
            mk[it.second]++;
        }
        vector<int> v(mx_f+1,0);
        for(int i=0;i<=mx_f;i++){
            if(mk.find(i)!=mk.end()){
                v[i] = mk[i];
            }
        }
        int count =0;
        for(int i=v.size()-1;i>0;i--){
            if(v[i]>1){
                count += v[i]-1;
                v[i-1] += v[i]-1;
            }
        }
        // count += v[0];
        
        return count;
      
    }
};