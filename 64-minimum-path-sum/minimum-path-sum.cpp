class Solution {
public:
    int minPathSum(vector<vector<int>>& grids) {

        //tabulation
        int n=grids.size();
        int m=grids[0].size();
        vector<vector<int>> dp(n,vector<int> (m,0));
        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){
                if(i==0 && j==0) dp[0][0]=grids[0][0];
               else{
                 int Up=1e9,left=1e9;
              if(i>0)  Up=grids[i][j]+dp[i-1][j];
              if(j>0)  left=grids[i][j] + dp[i][j-1];

              dp[i][j]=min(Up,left);
               }
            }
        }

        return dp[n-1][m-1];
        
    }
};