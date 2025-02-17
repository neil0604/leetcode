class Solution {
    
public:

    int f(vector<int> &nums,int i,vector<int> &dp){
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        if(nums.size() <= i) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = max(f(nums,i+2,dp)+nums[i],f(nums,i+1,dp));
    }
    int rob(vector<int>& nums) {
        int i=0;
        vector<int> dp(1006,-1);
        if(nums.size()==0) return 0;
        int res=f(nums,i,dp);
        return res;
    }
};