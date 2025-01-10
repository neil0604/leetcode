class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        int n= nums.size();
        int lo=0;
        int hi=n-1;
        if(nums.size()==1) {
            if(nums[0]==target) return {0,0};
            else return {-1,-1};
        }
        // first occurence
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                if(mid==0){
                    v[0]=mid;
                    break;
                }
              else  if(nums[mid-1]==target) hi=mid-1;
            else{
                v[0]=mid;
                break;
            }
        }
            if(nums[mid]>target) hi=mid-1;
            if(nums[mid]<target) lo=mid+1;
        }
        //last occurence
        lo=0;
        hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target){
                if(mid==n-1){
                    v[1]=mid;
                    break;
                }
                if(nums[mid+1]==target) lo=mid+1;
            else{
                v[1]=mid;
                break;
            }
        }
            if(nums[mid]>target) hi=mid-1;
            if(nums[mid]<target) lo=mid+1;
        }
        return v;
    }
};