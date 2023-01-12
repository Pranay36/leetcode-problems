class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int n=v.size();
        int k;
        if(n%3==0){
            k = n/3;
        }else{
            k= n/3;
        }
        
        vector<int>ans;
        map<int,int>m;
        
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        
        for(auto it: m){
            if(it.second > k){
                ans.push_back(it.first);
            }
        }
        
        return ans;
        
    }
};