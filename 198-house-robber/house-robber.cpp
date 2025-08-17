class Solution {
private:
    int f(int idx,vector<int> & nums,int N,vector<int> &dp){
       if(idx==0) return nums[idx];
       if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick = nums[idx] ;
        if(idx>1) pick+= f(idx-2,nums,N,dp);
        int notpick = 0+f(idx-1,nums,N,dp);
       return dp[idx]= max(pick,notpick);
    }
public:
    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int> dp(n+1,-1);
         return  f(n,nums,nums.size(),dp);
        
    }
};