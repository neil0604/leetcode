class Solution {
private:
    int f(vector<int>& nums,int mid, int threshold){
        int total=0;
        for(auto ele : nums){
           total+= ceil((double)ele/mid);
        }
        return total;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=0;
        for(auto num : nums){
            maxi=max(maxi,num);
        }
        int n=nums.size();
     //   if(n > threshold) return -1;
        int low=1;
        int high=maxi;
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
           int requiredSum = f(nums,mid,threshold);
            if(requiredSum <= threshold){
                ans=mid;
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};