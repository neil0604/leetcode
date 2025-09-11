class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //tabulation

        int n=triangle.size();
        int m=triangle[n-1].size();
        vector<vector<int>> dp(n,vector<int> (m));
        for(int i=0;i<n;i++){
             m=triangle[i].size();
            for(int j=0;j<m;j++){
                //base case
                if(i==0 && j==0) dp[0][0]=triangle[0][0];
                else{
            int up=1e9,left=1e9;
              if(j-i < 0)  up=triangle[i][j]+dp[i-1][j];
             if(j-1 >= 0)   left=triangle[i][j]+dp[i-1][j-1];

             dp[i][j]=min(up,left);
                }
            }
        }
        int mini=1e9;
       for(int i=0;i<m;i++){
        mini=min(mini,dp[n-1][i]);
       }
       return mini;
    }
};