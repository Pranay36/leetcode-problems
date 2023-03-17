class Solution {
public:
    int singleNumber(vector<int>& num) {
        int n = num.size();
        int ans=num[0];
        for(int i=1;i<n;i++){
            ans = ans^num[i];
        }
        return ans;
    }
};