class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        queue<pair<int,int>> q;
        vector<vector<char>> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 ||j==0||j==m-1||i==n-1){
                    if(board[i][j]=='O'){
                        board[i][j] = 'K';
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
                if(r>=0&&r<n&&c>=0&&c<m && board[r][c]=='O'){
                    q.push({r,c});
                    board[r][c]='K';
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                if(board[i][j]=='K')
                    board[i][j]='O';
            }
        }
    }
};