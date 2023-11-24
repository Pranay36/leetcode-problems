class Solution {
public:
    void merge(vector<int>& num1, int n, vector<int>& num2, int m) {
        int i=0;
        int j=0;
        vector<int> v;
        while(i<n &&j<m){
            if(num1[i]>num2[j]){
                v.push_back(num2[j]);
                j++;
            }else{
                v.push_back(num1[i]);
                i++;
            }
        }
        while(i<n){
            v.push_back(num1[i]);
            i++;
        }
        while(j<m){
            v.push_back(num2[j]);
            j++;
        }
        // // cout<<v.size();
        for(int i=0;i<v.size();i++){
            num1[i]=v[i];
        }
        // cout<<endl;
    }
};