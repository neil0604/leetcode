class Solution {
private:
    void dfs(vector<vector<int>> visited,vector<vector<int>>& im,int sr,int sc,int color){
         int n=im.size();
        int m=im[0].size();
        visited[sr][sc]=1;
        int ini=im[sr][sc];
        im[sr][sc]=color;
           int delrow[]={-1,0,1,0};
            int delcol[]={0,1,0,-1};
        for(int i=0;i<4;i++){
             int nrow=sr+delrow[i];
                int ncol=sc+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && im[nrow][ncol]==ini && visited[nrow][ncol]==0){
                
                dfs(visited,im,nrow,ncol,color);
                
                }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& im, int sr, int sc, int c) {
          int n=im.size();
        int m=im[0].size();
vector<vector<int>> vis(n,vector<int> (m,0));
        dfs(vis,im,sr,sc,c);
        return im;

    }
       
};