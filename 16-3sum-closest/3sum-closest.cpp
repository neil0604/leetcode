class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini=1e9;
        int n=nums.size();
        int result=0;
        for(int i=0;i<n-2;i++){
            int a=nums[i];//fixed a
            int k=i+1;
           int right=n-1;
         // if(  a+nums[k]+nums[right] == target) return 0;
            while(k<right){
           if(a+nums[k]+nums[right] > target) {
           if(abs(target-(a+nums[k]+nums[right])) < mini){
            result=a+nums[k]+nums[right];
            mini=abs(target-(a+nums[k]+nums[right]));
           }
            right--;
          }
          else {
           if(abs(target-(a+nums[k]+nums[right])) < mini){
            result=a+nums[k]+nums[right];
            mini=abs(target-(a+nums[k]+nums[right]));
           }
            k++;
          }
          }
        }
        return result;
    }
};