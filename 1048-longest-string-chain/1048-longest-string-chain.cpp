class Solution {
public:
    bool ispred(string &s1,string &s2){
        int k = s1.size();
        int l = s2.size();
        if(k-l!=1){
            return false;
        }
        string temp = s1;
        for(int i=0;i<k;i++){
            s1.erase(s1.begin() + i);
            if(s1==s2){
                return true;
            }
            s1 = temp;
        }
        return false;
    }
    
  
    int longestStrChain(vector<string>& v) {
        int n = v.size();
        vector<int>dp(n,1);
        vector<int>hash(n,0);
        sort(v.begin(), v.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
        
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        
        for(int i=0;i<n;i++){
            hash[i]=i;
            
            for(int prev = 0;prev<i;prev++){
                string s1 = v[i];
                string s2 = v[prev];
                if(ispred(s1,s2) && dp[i]< 1+dp[prev]){ 
                    dp[i] = 1+dp[prev];
                    hash[i] = prev;
                }
            }
        }
        
        int mx =0;
        int ind =-1;
        for(int i=0;i<n;i++){
            if(mx<dp[i]){
                mx = dp[i];
                ind =i;
            }
        }
        vector<string>temp;
        temp.push_back(v[ind]);
        while(hash[ind]!=ind){
            ind  = hash[ind];
            temp.push_back(v[ind]);
        }
        reverse(temp.begin(),temp.end());
        // for(int i=0;i<temp.size();i++){
        //     cout<<temp[i]<<" ";
        // }
        // cout<<endl;
        
        return mx;
        
    }
};