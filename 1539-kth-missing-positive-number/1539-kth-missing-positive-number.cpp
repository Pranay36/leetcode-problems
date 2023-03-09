class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        vector<int>v;
        int m[10001] ={0};
        int n = a.size();
        for(int i=0;i<n;i++){
            m[a[i]]=1;
            
        }
        int count=0;
        int ans=0;
        for(int i=0;i<10001;i++){
            if(m[i]==0 && i!=0){
                ans = i;
                count++;
            }
            if(count==k){
                break;
            }
        }
        
        return ans;
    }
};