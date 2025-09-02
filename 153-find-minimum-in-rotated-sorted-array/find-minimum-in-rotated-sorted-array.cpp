class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n=nums.size();

        int low=0,high=n-1;
        int mini=INT_MAX;

        while(low<=high){
            int mid=(low+high)/2;
         //   if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]) return nums[mid];

            if(nums[low]<=nums[mid]){
                //left sorted
                mini=min(nums[low],mini);
                low=mid+1;
            }
            else{
                //right sorted
                if(nums[mid]<=nums[high]){
                 mini=min(nums[mid],mini);
                high=mid-1;
                }
            }
        }
        return mini;
    }
};