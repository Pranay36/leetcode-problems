class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        int dx[8] = {0,-1,0,1,1,-1,1,-1};
        int dy[8] = {-1,0,1,0,1,-1,-1,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sum= img[i][j];
                int count=1;
                for(int k=0;k<8;k++){
                    int r = i+dx[k];
                    int c = j+dy[k];
                    if(r<n && c<m && r>=0 && c>=0){
                        sum = sum + img[r][c];
                        count++;
                    }
                }
                ans[i][j] = floor(sum/count);
            }
        }
        return ans;
    }
};