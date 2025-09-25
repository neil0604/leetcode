class Solution {
private:
   unsigned long long f(vector<int>& piles, int mid){
       unsigned long long sum=0;
        for(auto pile : piles){
          sum+=  ceil((double)pile/mid);
        }
        return sum;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        if(h<piles.size()) return 0;

        int low=1,high=1e9;
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;
         unsigned   long long required=f(piles,mid);
            if(required<=h){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};