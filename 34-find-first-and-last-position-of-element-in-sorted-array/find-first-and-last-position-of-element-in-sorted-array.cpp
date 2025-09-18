class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) {
                if(mid > 0 && nums[mid]==nums[mid-1]) {
                    high=mid-1;
                }else {ans[0]=mid;
                break;}
            }
            else if(target > nums[mid]) low=mid+1;
            else high=mid-1;
        }
        //last occurence
        low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) {
                if(mid <n-1 && nums[mid]==nums[mid+1]) {
                    low=mid+1;
                }else {ans[1]=mid;
                break;}
            }
            else if(target > nums[mid]) low=mid+1;
            else high=mid-1;
        }

return ans;

    }
};