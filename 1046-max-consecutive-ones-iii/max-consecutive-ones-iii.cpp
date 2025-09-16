class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxi=-1e9;
        int zero=0;
        int left=0,right=0;
        while(right<nums.size()){
            if(nums[right]==0) zero++;
            if(zero > k){
                while(left<=right && zero > k){
                    if(nums[left]==0) zero--;
                    left++;
                }
            }
            maxi=max(maxi,right-left+1);
            right++;
        }
        return maxi;
    }
};