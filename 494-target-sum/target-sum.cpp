class Solution {
private:
    int helper(vector<int>& nums, int target,int idx, int sum,int & cnt,map<pair<int, int>, int>& dp){
        // base case
        if(idx==nums.size()){
          //  int a=0;
            if(sum==target) return 1;
            return 0;
        }
        if(dp.count({idx,sum})) return dp[{idx,sum}];

        // operations
       int add= helper(nums,target,idx+1,sum+nums[idx],cnt,dp);
       int sub= helper(nums,target,idx+1,sum-nums[idx],cnt,dp);

       return dp[{idx,sum}]=add+sub;


    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
       // dp map to store results of subproblems {index, sum} -> ways
        map<pair<int, int>, int> dp;
        int cnt=0;
       return helper(nums,target,0,0,cnt,dp);

        return cnt;
    }
};