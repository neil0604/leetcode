class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:

        left,right=0,0

        ans=0
        mul=1
        cnt=0

        while right < len(nums) :
            mul=mul*nums[right]
            while mul >=k and left<=right:
                mul=mul // nums[left]
                left+=1
            cnt+=1+(right-left)
            right+=1
        
        return cnt
        