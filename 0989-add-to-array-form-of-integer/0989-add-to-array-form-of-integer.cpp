class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        int n = num.size();
        num[n-1] +=k;
        for(int i=n-1;i>=0;i--){
            if(i!=0){
                int x = num[i];
                num[i] = (carry + x)%10;
                carry = (carry+x-num[i])/10;
                // cout<<carry<<" ";
            }
            else{
                num[i] = carry+num[i];
            }
        }
        while(num[0]/10>0){
        if(num[0]>=10){
            int x = num[0];
            num[0] = x%10;
            int c = x/10;
            num.insert(num.begin(),x/10);
        }
        }
        // cout<<endl;
        return num;
    }
};