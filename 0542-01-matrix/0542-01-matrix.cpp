class Solution {
public:
    
    // void solve(vector<vector<int>>& ans,vector<vector<int>>&mat,int row,int col,int a,int b, int p){
    //     if(mat[row][col]==0){
    //         ans[a][b]=p;
    //         return;
    //     }
    //     int dx[4] ={-1,0,1,0};
    //     int dy[4] = {0,-1,0,1};
    //     for(int i=0;i<4;i++){
    //         int r= row+dx[i];
    //         int c = col+dy[i];
    //         if(r>=0 && r<mat.size() && c>=0 && c<mat[0].size()){
    //         solve(ans,mat,r,c,a,b,p+1);
    //         }
    //     }
    //     return;
    // }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<pair<int,int>,int>> q;
        
        vector<vector<int>> v(n,vector<int>(m,0));
        vector<vector<int>> ans(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    v[i][j]=1;
                }
            }
        }
        
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,-1,0,1};
        
        while(q.size()!=0){
            auto p = q.front();
            int r = p.first.first;
            int c = p.first.second;
            int dis = p.second;
            q.pop();
            ans[r][c] = dis;
            for(int i=0;i<4;i++){
                int row = r+dx[i];
                int col = c+dy[i];
                
                if(row>=0 && row<n && col>=0 && col<m &&v[row][col]==0){
                    v[row][col]=1;
                    q.push({{row,col},dis+1});
                }
            }
            
            
        }
        
     
        return ans;
        
    }
};