class Solution {
public:
    bool f(vector<int> & piles,int mid,int h){
        long long total=0;
        for(auto ele : piles){
            total+=ceil((double)ele/mid);
        }
        return total <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(auto ele : piles){
            maxi=max(maxi,ele);
        }
        int ans=0;
        //ramge (1,maxi)
        int n=piles.size();
        int low=1,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;

            if(f(piles,mid,h)==true) {
                ans=mid;
                high=mid-1;

            }
            else {
                low=mid+1;
            }
        }
        return ans;
    }
};