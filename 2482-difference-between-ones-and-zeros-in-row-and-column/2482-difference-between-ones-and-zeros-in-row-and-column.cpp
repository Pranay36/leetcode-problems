class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<int> one_row(n,0);
        vector<int> one_col(m,0);
        vector<int> zero_row(n,0);
        vector<int> zero_col(m,0);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==1){
                    one_row[i]++;
                    one_col[j]++;
                }else{
                    zero_row[i]++;
                    zero_col[j]++;
                }
            }
        }
        
        vector<vector<int>> ans(n,vector(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    ans[i][j] = one_row[i]+one_col[j]- zero_row[i] - zero_col[j];
            }
        }
        return ans;
    }
};