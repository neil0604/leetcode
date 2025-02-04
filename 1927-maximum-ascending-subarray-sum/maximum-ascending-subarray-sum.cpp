class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n=nums.size(),sum=nums[0],maxi=INT_MIN;
         maxi=max(sum,maxi);
        for(int i=0;i<n-1;i++){
            if(nums[i] < nums[i+1]){
                sum+=nums[i+1];
            }else {
                sum=nums[i+1];

            }
            maxi=max(sum,maxi);
        }
       return maxi;
    }
};