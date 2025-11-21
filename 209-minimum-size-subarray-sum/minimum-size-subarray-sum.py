class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        left,right=0,0

        sum=0
        ans=1e9

        while right<len(nums) :
            sum=sum+nums[right]
            
            if target <= sum :
                ans=min(ans,right-left+1)
                while target < sum :
                    sum=sum-nums[left]
                    left=left+1
                    if sum >= target:
                        ans=min(ans,right-left+1)
                    
            right=right+1
        if ans==1e9:
            return 0
        return ans




                    

        