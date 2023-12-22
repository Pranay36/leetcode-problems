class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int mx = 0;
        for(int i=1;i<n;i++){
            string left = s.substr(0,i);
            string right = s.substr(i,n);
            int mx0=0;
            int mx1=0;
            for(int j=0;j<left.size();j++){
                if(left[j]=='0')
                    mx0++;
            }
            for(int j=0;j<right.size();j++){
                if(right[j]=='1')
                    mx1++;
            }
            
            mx = max(mx,mx0+mx1);
            
        }
        return mx; 
    }
};