class Solution {
private:
    int mincost(vector<int> & cost,int idx,int n,vector<int> & dp){

        //base case
        if(idx>=n) return 0;
        if(idx==n-1) return 0 ;
        if(idx==n-2) return min(mincost(cost,idx+1,n,dp)+cost[idx+1],0);

        if(dp[idx+1]!=-1) return dp[idx+1];
        return dp[idx+1] = min(mincost(cost,idx+1,n,dp)+cost[idx+1],mincost(cost,idx+2,n,dp)+cost[idx+2]);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>  dp(cost.size()+1,-1);
        
        
      mincost(cost,-1,cost.size(),dp);
      return dp[0];
        
    }
};