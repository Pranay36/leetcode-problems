class Solution {
public:
    
    double f(vector<int>&v,int n, int mid){
        double ans = 0.0;
        
        for(int i=0;i<n-1;i++){
            ans = ans+ ceil((double)(1.0*v[i])/mid);
        }
        ans = ans+(double)(1.0*v[n-1]/mid);
        return ans;
        
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n = dist.size();
        int ans = INT_MAX;
        int h = 10000000;
        int l =1;
        
        while(h>=l){
            int mid = l + (h - l)/2;;
            double count = f(dist,n,mid);
            if(count<=hour){
                ans = min(ans,mid);
                h = mid-1;
            }
            else
                l = mid+1;
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};