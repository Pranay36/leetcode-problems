class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int countmx =0;
         int v[n][m];
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    v[i][j]=2;
                }else{
                    v[i][j]=0;
                }
            }
        }
        
        int dx[4] = {-1,0,1,0};
        int dy[4] = {0,1,0,-1};
        int tm=0;
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            q.pop();

            for(int i=0;i<4;i++){
                int r = row+dx[i];
                int c = col + dy[i];
                if(r>=0 && r<n && c>=0 && c<m && v[r][c]==0 && grid[r][c]==1){
                    q.push({{r,c},t+1});
                    v[r][c]=2;
                }
            }
        }
        
//  int drow[4] = {-1,0,1,0};
//         int dcol[4] = {0,1,0,-1};
//         int tm=0;
//         while(!q.empty()){
//             int r = q.front().first.first;
//             int c = q.front().first.second;
//             int t = q.front().second;
//             tm = max(tm,t);
//             q.pop();

//             for(int i=0;i<4;i++){
//                 int nrow = r+drow[i];
//                 int ncol = c + dcol[i];
//                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && v[nrow][ncol] == 0 && grid [nrow][ncol]== 1){
//                    q.push({{nrow, ncol}, t + 1});
//                    v[nrow][ncol] = 2;
//                 }
//             }
//         }  
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]!=2 &&grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return tm;
        
    }
};        