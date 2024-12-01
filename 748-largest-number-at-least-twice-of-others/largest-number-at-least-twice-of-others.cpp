class Solution {
public:
    int dominantIndex(vector<int>& nums1) {
        vector<int> nums=nums1;

        sort(nums.begin(),nums.end());
        int n=nums.size();
       int maxi=nums[n-1];
       int maxi2=nums[n-2];
       int idx=0;
       for(int i=0;i<n;i++){
        if(maxi==nums1[i]) idx=i;
       }
       if(maxi2*2 > maxi) return -1;
       else return idx;
        
    }
};