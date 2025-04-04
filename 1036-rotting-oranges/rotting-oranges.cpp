class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
         vector<vector<int>> vis(n,vector<int> (m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int tm=0;
       
        while(!q.empty()){
            int r=q.front().first.first;
            int col = q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm,t);
            int delrow[]={-1,0,1,0};
            int delcol[]={0,1,0,-1};
            for(int i=0;i<4;i++){
                
                  int  r1=r+delrow[i];
                   int  col1=col+delcol[i];
                    if(r1>=0 && r1<n && col1>=0 && col1<m && grid[r1][col1]==1 && vis[r1][col1]==0){
                        q.push( { { r1 , col1 } , t + 1 } );
                        vis[r1][col1]=1;
                        grid[r1][col1]=2;
                    }
                }
            }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return tm;
    }
    
    
};