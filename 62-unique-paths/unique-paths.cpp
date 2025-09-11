class Solution {
    
public:
    int uniquePaths(int m, int n) {

        //tabulation
        vector< vector<int>> dp(m,vector<int> (n,0));

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){
                int right=0,down=0;
                if(i==0 && j==0)  dp[0][0]=1;
                if(i==0 || j==0)  dp[i][j]=1;
                
              else{
                right = dp[i][j-1];
                down = dp[i-1][j];
                dp[i][j]=down+right;
              }
              
            }
        }
        return dp[m-1][n-1];
    }
};