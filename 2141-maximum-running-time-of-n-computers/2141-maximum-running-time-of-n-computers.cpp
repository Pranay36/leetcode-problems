class Solution {
public:
    
    bool ispossible(vector<int>&bat, int n,long long mid){
        long long  x = n *mid;
        
        for(long long it: bat){
            x -= min(mid,it);
        }
        
        return (x<=0);
    }
    
    
    long long maxRunTime(int n, vector<int>& bat) {
        long long l =0;
        long long  h=0;
        int s = bat.size();
        long long  ans=0;
        for(int i=0;i<s;i++){
            h = h+ bat[i];
        }
        while(l<=h){
            long long  mid = l + (h-l)/2;
            
            if(ispossible(bat,n,mid)){
                ans= mid;
                l= mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};