class Solution {
public:
    int minSubArrayLen(int target, vector<int>& num) {
        int i=0;
        int n = num.size();
        int j =0;
        int mn = INT_MAX;
        int sum =0;
        while(j<n){
            sum = sum+num[j];
            while(sum>=target){
                sum = sum-num[i];
                mn = min(mn, j-i+1);
                i++;
            }
            j++;
        }
        if(mn==INT_MAX)
            return 0;
        
        return mn;
        
    }
};