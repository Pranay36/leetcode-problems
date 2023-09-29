class Solution {
public:
    bool isMonotonic(vector<int>& num) {
        int n = num.size();
        int x = num[n-1]-num[0];
        
        if(x>0){
            for(int i=1;i<n;i++){
                if(num[i]<num[i-1])
                    return false;
            }
        }
        else{
            for(int i=1;i<n;i++){
                if(num[i]>num[i-1])
                    return false;
            }
        }
        return true;
    }
};