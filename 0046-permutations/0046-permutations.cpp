class Solution {
    public:
    void answer(int ind, vector<int> &n , vector<vector<int>> &v){
        if(ind==n.size()){
            v.push_back(n);
            return;
        }
        for(int i = ind; i<n.size();i++){
            swap(n[ind],n[i]);
            answer(ind+1,n,v);
            swap(n[ind],n[i]);
              
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& n) {
        vector<vector<int>> v;
       
        answer(0,n,v);
        return v;
    }
};