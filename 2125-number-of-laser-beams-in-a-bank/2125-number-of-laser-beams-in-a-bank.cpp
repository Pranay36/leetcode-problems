class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev_count1=0;
        int n = bank.size();
        int m = bank[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            int count1=0;
            for( int j=0;j<m;j++){
                if(bank[i][j]=='1'){
                    count1++;
                }
            }
            if(prev_count1==0){
                prev_count1=count1;
                continue;
            }
            
            ans += prev_count1*count1;
            if(count1!=0){
                prev_count1=count1;
            }
        }
        return ans;
    }
};