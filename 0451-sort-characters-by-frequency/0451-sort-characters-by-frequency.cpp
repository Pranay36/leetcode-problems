class Solution {
public: 
    
    template <typename T1, typename T2>
    struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second > b.second;
    }
};
    string frequencySort(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        string ans="";
        vector<pair<char, int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), less_second<char, int>());
        for(auto x:v){
           cout<<x.first<<" "<<x.second<<endl; 
        }
        
        for(auto x:v){
            for(int i=1;i<=x.second;i++){
                ans += x.first;
            }
        }
        return ans;
    }
};