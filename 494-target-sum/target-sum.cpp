class Solution {
private:
    void helper(vector<int>& nums, int target,int idx, int sum,int & cnt){
        // base case
        if(idx==nums.size()){
            if(sum==target) cnt++;
            return;
        }

        // operations
        helper(nums,target,idx+1,sum+nums[idx],cnt);
        helper(nums,target,idx+1,sum-nums[idx],cnt);
    }
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int cnt=0;
        helper(nums,target,0,0,cnt);

        return cnt;
    }
};