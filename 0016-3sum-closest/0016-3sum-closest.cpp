class Solution {
public:
    int threeSumClosest(vector<int>& num, int t) {
        sort(num.begin(),num.end());
        int n = num.size();
        int mn = INT_MAX;
        int ans;
        for(int i=0;i<n;i++){
            int a = num[i];
            int k = i+1;
            int l = n-1;
            
            while(k<l){
                if(a+num[k]+num[l]==t)
                    ans = t;
                if(abs(a+num[k]+num[l]-t)<mn){
                    mn= abs(a+num[k]+num[l]-t);
                    ans = a+num[k]+num[l];
                  }
                
                if(a+num[k]+num[l]>t){
                    l--;
                }
                else{
                    k++;
                }
                
                
                
            }
        }
        return ans;
        
    }
};