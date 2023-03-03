class Solution {
public:
    int strStr(string ha, string ne) {
        int n = ha.size();
        int m = ne.size();
        int ans =-1;
        for(int i=0,j = m-1;j<n;i++,j++){
            string a;
            for(int k=i;k<=j;k++){
                a.push_back(ha[k]);
            }
            if(a==ne){
                ans = i;
                break;
            }
        }
        return ans;
    }
};