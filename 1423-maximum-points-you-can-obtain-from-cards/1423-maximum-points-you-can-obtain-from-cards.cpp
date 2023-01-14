class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n = v.size();
        int sum = 0;
        for(int i=0;i<k;i++){
            sum = sum + v[i];
        }
        int x = sum;
        for(int i= k-1;i>=0;i--){
            x = x- v[i];
            x = x+v[n-k+i];
            sum = max(sum,x);
        }
        return sum;
        
    }
};