class Solution {
public:
    int shipWithinDays(vector<int>& weight, int d) {
        int n = weight.size();
        int l =0;
        int r =0;
        // sort(weight.begin(),weight.end());
        for(int i=0;i<n;i++){
            r +=weight[i];
            l = max(l,weight[i]);
        }
        int ans = r;
        
        while(l<=r){
            int mid = (l+r)/2;
            int k=0;
            int count=1;
            for(int i=0;i<n;i++){
                k += weight[i];
                if(k>mid){
                    count++;  
                    k=0;
                    i--;
                }
            }
            if(count<=d){
                ans = min(ans,mid);
                 r= mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};