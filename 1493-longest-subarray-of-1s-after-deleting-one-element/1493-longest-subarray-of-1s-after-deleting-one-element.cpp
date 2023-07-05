class Solution {
public:
    int longestSubarray(vector<int>& num) {
        int  i=0;
        int j=0;
        int flag=0;
        int count=0;
        int n= num.size();
        int k=0;
        int ans=0;
        while(i<n&&j<n){
               if(num[j]==0 && flag==1){
                i=k;
                j=k;
                ans = max(ans,count);
                count=0;
                flag=0;
                // j++;
                continue;
            }
            if(num[j]==0 &&flag==0){
                flag=1;
                k= j+1;
            }
         
            if(num[j]==1)
                count++;
            
            j++;
            cout<<count<<" ";
            
        }
        cout<<endl;
        ans = max(ans,count);
        if(ans==n)
            ans=ans-1;
        return ans;
    }
};