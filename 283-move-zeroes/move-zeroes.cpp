class Solution {
public:
    void moveZeroes(vector<int>& nums) {
int n=nums.size();
        int left=0,right=n-1;
        
        
        for( ;left<n;left++){
            if(nums[left]!=0) continue;
            int right=left+1;
            while(right<n && nums[right]==0) right++;
            if(right<n)
            swap(nums[left],nums[right]);
        }
        
    }
};