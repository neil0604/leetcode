class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        
        //find the sorted side of the array
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<=nums[high]){
                //sorted right part
                if(nums[mid]<=target && target <= nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }

            }else {
                //left part sorted
                if(nums[low]<=target && nums[mid]>=target){
                    high=mid-1;
                }else low = mid+1;
            }
        }
        return -1;
    }
};