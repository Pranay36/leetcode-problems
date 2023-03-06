class Solution {
public:
    bool isfis(vector<int> weights,int mid,int days){
        int totday=1;
        int cur=0;
        for(int i=0;i<weights.size();i++){
            cur += weights[i];
            if(cur>mid){
                totday++;
                cur = weights[i];
            }
        }
        return totday<=days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int tot =0;
        int mx =0;
        for(int i=0;i<weights.size();i++){
            tot += weights[i];
            mx = max(mx,weights[i]);
        }
        int l = mx;
        int h = tot;
        
        while(l<h){
            int mid = (l+h)/2;
            
            if(isfis(weights,mid,days)){
                h = mid;
            }
            else{
                l = mid+1;
            }
            
        }
        return l;
    }
};