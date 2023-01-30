class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int n =v.size();
        k = k%n;
        int x;
        x =  n -k;
        for(int i=0;i<x;i++){
            v.push_back(v[i]);
        }
        vector<int>::iterator it1, it2;
        it1 = v.begin();
        it2 = v.begin();
        for(int i=0;i<x;i++){
            it2++;
        }
        v.erase(it1,it2);
        
    }
};