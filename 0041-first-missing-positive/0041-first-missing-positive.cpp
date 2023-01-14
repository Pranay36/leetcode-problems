class Solution {
public:
    int firstMissingPositive(vector<int>& num) {
        int n = num.size();
        vector<bool> vec(100005,false);
        for(int i=0;i<n;i++){
            if(num[i]>0 && num[i]<=100000){
                vec[num[i]] = true;
            }
        }
        int j;
        for(int i=1;i<100005;i++){
            if(vec[i]==false){
                return i;
            }
        }
        // cout<<endl;
        return 0;
    }
};