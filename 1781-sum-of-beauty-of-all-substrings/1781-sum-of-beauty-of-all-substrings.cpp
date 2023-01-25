class Solution {
public:
    int beautySum(string s) {
        int count=0;
    
    int m=0;
     map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
       mp.clear();
        for(int j=i;j<s.size();j++)
        {
            mp[s[j]]++;
            int    mx=INT_MIN,mn=INT_MAX;
            for(auto it:mp)
            {
               mn=min(mn,it.second);
                mx=max(mx,it.second);
            }
           /// cout<<ma<<" "<<mi<<endl;
            count+=mx-mn;
        }
    }
    
    return count;
    
}
};