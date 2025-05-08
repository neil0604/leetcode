class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> vis(n,vector<int> (m));
        vector<vector<int>> dis(n,vector<int> (m));
      int  delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};

        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty()){

            int row=q.front().first.first;
             int col=q.front().first.second;
              int distance=q.front().second;
              q.pop();
              dis[row][col]=distance;
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if( nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]==1 ){
                    q.push({{nrow,ncol},distance+1});
                    vis[nrow][ncol]=1;
                }
            }


        }
        return dis;

    }
};