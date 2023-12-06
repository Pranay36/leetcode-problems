class Solution {
public:
    int totalMoney(int n) {
        int m = n/7;
        int ans =0;
        int k = n%7;
        if(m!=0)
        ans = m *(28) +(7*(m)*(m-1)/2);
        m = m+1;
        for(int i =1;i<=k;i++){
            ans += m;
            m++;
            
        }
        return ans;
        
        
    }
};