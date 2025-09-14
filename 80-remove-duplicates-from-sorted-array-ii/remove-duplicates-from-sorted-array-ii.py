class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l=0
        n=len(nums)
        r=0
        while r < len(nums):
            cnt=1
            while(r<n-1 and nums[r]==nums[r+1]):
                cnt+=1
                r+=1
        #    // ran=min(2,cnt)
            for i in range(min(2,cnt)):
                nums[l]=nums[r]
                l+=1
            r+=1
        return l
