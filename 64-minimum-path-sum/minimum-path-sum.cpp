class Solution {
public:
    int minPathSum(vector<vector<int>>& grids) {

        //tabulation
        int n=grids.size();
        int m=grids[0].size();
        vector<int> prev(m,0);
       
        vector<vector<int>> dp(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            vector<int> curr(m,0);
            for(int j=0;j<m;j++){
                if(i==0 && j==0) curr[0]=grids[0][0];
               else{
                 int Up=1e9,left=1e9;
              if(i>0)  Up=grids[i][j]+prev[j];
              if(j>0)  left=grids[i][j] + curr[j-1];

              curr[j]=min(Up,left);
               }
            }
            prev=curr;
        }

        return prev[m-1];
        
    }
};