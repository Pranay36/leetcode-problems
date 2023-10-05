class Solution {
public:
    vector<int> majorityElement(vector<int>& num) {
        int n = num.size();
        int cnt1 =0;
        int cnt2 =0;
        int e1 = INT_MIN;
        int e2 =INT_MIN;
        
        for(int i=0;i<n;i++){
            if(cnt1==0 && e2!=num[i]){
                cnt1=1;
                e1 = num[i];
            }
            else if(cnt2==0 && e1!=num[i]){
                cnt2=1;
                e2 = num[i];
            }
            else if(e1==num[i]){
                cnt1++;
            }
            else if(e2==num[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        int k=0;
        int j=0;
         int mini = (int)(n/3)+1;
        for(int i=0;i<n;i++){
            if(num[i]==e1){
                k++;
            }
            if(num[i]==e2){
                j++;
            }
        }
        vector<int>v;
        if(k>=mini)
            v.push_back(e1);
        if(j>=mini)
            v.push_back(e2);
        
        return v;
        
    }
};