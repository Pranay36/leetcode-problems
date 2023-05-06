class Solution {
public:
    bool lemonadeChange(vector<int>& v) {
        if(v[0]!=5)
            return false;
        
        int sum = 0;
        int n = v.size();
        int cnt5 =0;
        int cnt10 =0;
        int cnt20 =0;
        
        for(int i=0;i<n;i++){
            if(v[i]==5){
                cnt5++;
            }
            if(v[i]==10){
                cnt10++;
                if(cnt5==0){
                    return false;
                }
                cnt5--;
            }
            if(v[i]==20){
                cnt20++;
                if(cnt5==0 || (cnt10==0 && cnt5<3)){
                    return false;
                }
                if(cnt10==0){
                    cnt5= cnt5-3;
                }
                else{
                    cnt5--;
                    cnt10--;
                }
            }
        }
        
        return true;
    }
};