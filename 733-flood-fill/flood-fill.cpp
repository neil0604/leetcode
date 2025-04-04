class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& im, int sr, int sc, int c) {
         int n=im.size();
        int m=im[0].size();
queue<pair<int,int>> q;
        int ini = im[sr][sc];
    
        im[sr][sc]=c;
        q.push({sr,sc});
        vector<vector<int>> vis(n,vector<int> (m,0));
        vis[sr][sc]=1;
       

        while(!q.empty()){

            int delrow[]={-1,0,1,0};
            int delcol[]={0,1,0,-1};

          sr=  q.front().first;
            sc=q.front().second;
            q.pop();

            for(int i =0;i<4;i++){
                int nrow=sr+delrow[i];
                int ncol=sc+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && im[nrow][ncol]==ini && vis[nrow][ncol]==0){
                    im[nrow][ncol]=c;
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});

                }
            }

        }

        return im;
    }
};