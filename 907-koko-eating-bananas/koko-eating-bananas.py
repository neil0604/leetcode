class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        

        maxi=max(piles)

        mini=1
        # if mini > h:
        #     return -1
        
        def cal(piles,mid):
            sum=0
            for pile in piles:
              sum=sum +  ceil(pile/mid)
            return sum
        ans=0
        while mini<=maxi:
            mid = (mini+maxi) // 2

            required=cal(piles,mid)

            if required <= h:
                ans=mid
                maxi=mid-1
            else:
                mini=mid+1

        return ans    

