class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) continue;
            if(nums[i]<0) b++;
            if(nums[i]>0) a++;
        }
        return max(a,b);
    }
};