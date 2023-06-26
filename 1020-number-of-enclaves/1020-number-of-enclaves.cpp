class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<char>> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 ||j==0||j==m-1||i==n-1){
                    if(grid[i][j]==1){
                        grid[i][j] = 2;
                        q.push({i,j});
                    }
                }
            }
        }
        
        
        int dx[4]= {-1,0,1,0};
        int dy[4]={0,-1,0,1};
        
        while(q.size()!=0){
            auto p = q.front();
            
            int row = p.first;
            int col = p.second;
            q.pop();
            for(int i=0;i<4;i++){
                int r = row +dx[i];
                int c = col + dy[i];
                if(r>=0&&r<n&&c>=0&&c<m && grid[r][c]==1){
                    q.push({r,c});
                    grid[r][c]=2;
                }
            }
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};