class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n=nums.size();
        int left=0,right=0;
        int sum=0;
        int mini=1e9;
        while(right<n){
            sum+=nums[right];
            while(sum >= target){
                mini=min(mini,right-left+1);

                sum-=nums[left];
                left++;
            }
            right++;
        }
        if(mini==1e9) return 0;
        return mini;
    }
};