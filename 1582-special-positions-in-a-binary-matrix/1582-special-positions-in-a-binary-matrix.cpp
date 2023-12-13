class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m =  mat[0].size();
        vector<int> vi(n,0);
        vector<int>vj(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 ){
                    vi[i]++;
                    vj[j]++;
                }
            }
            
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    if(vi[i]==1 &&vj[j]==1){
                        count++;
                    }
                }
            }
        }
           
        return count;
    }
};