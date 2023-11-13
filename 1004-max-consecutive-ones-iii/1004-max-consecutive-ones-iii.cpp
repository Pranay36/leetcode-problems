class Solution {
public:
    int longestOnes(vector<int>& num, int k) {
        int n = num.size();
        int i=0;
        int j=0;
        int count=0;
        int ans=0;
        int x=k;
        bool flag = false;
        while(i<n&&j<n){
            if(x==0&& num[j]==0){
                ans = max(count,ans);
                // cout<<"case 1"<<endl;
                x = k;
                count=0;
                i++;
                j = i;
                flag = false;
                continue;
            }
            if(num[j]==1){
                // cout<<"case 2"<<endl;
                j++;
                count++;
            }else{
                // cout<<"case 3"<<endl;
                if(flag==false){
                    i=j;
                    flag =true;
                }
                x--;
                count++;
                j++;
            }
        }
        ans = max(ans,count);
        return ans;
    }
};