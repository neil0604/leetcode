class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<vector<int>> ans;
        int n=nums.size();
        for(int left=0;left<n;left++){
            if(left>0 && nums[left]==nums[left-1]) continue;
            int i=left+1;
            int right=n-1;
           
        

            while(i<right){
                int curr=nums[left]+nums[i]+nums[right];
                if(curr==0) {
                    ans.push_back({nums[left],nums[i],nums[right]});
                    i++;
                    right--;
                    while(i<n and nums[i]==nums[i-1]) i++;
                    while(i < right && nums[right]==nums[right+1]) right--;
                }
                else if(curr>0) right--;
                else i++;
            }
        }
     
       
              return ans;

    }
};