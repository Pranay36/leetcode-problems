class Solution {
public:
    vector<int> findDuplicates(vector<int>& num) {
        int n = num.size();
        vector<int> vec(n+1,0);
        for(int i=0;i<n;i++){
            vec[num[i]]++;
        }
        vector<int>v;
        for(int i=0;i<vec.size();i++){
            if(vec[i]==2){
                v.push_back(i);
            }
        }
       return v;
    }
};