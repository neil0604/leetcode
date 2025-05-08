class Solution {
    private:
   void dfs(int row,int col,vector<vector<int>> &vis,vector<vector<int>>& board){
        int  delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        int n=board.size();
        int m=board[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow<n && ncol<m && nrow>=0 && ncol>=0 && !vis[nrow][ncol] && board[nrow][ncol]==1){
                dfs(nrow,ncol,vis,board);
            }

        }
    }
public:
    int numEnclaves(vector<vector<int>>& board) {
         int n=board.size();
        int m=board[0].size();
            vector<vector<int>> vis(n,vector<int> (m,0));
       
        for(int i=0;i<m;i++){
            if(board[0][i]==1){
                dfs(0,i,vis,board);
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][0]==1 && !vis[i][0]){
                dfs(i,0,vis,board);
            }
        }
        for(int i=0;i<n;i++){
            if(board[i][m-1]==1 && !vis[i][m-1]){
                dfs(i,m-1,vis,board);
            }
        }
        for(int i=0;i<m;i++){
            if(board[n-1][i]==1 && !vis[n-1][i]){
                dfs(n-1,i,vis,board);
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j]==1){
                c++;}
            }
        }
        return c;
    }
};