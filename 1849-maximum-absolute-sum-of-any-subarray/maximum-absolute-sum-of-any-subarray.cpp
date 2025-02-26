class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //KANADE'S ALGO
        int n=nums.size();
        int maxi=0;
        int mini=0;
        int sum=0,sum_neg=0;
        for(int i=0;i<n;i++){
             sum += nums[i];
            sum_neg+=nums[i];
            maxi=max(maxi,sum);
            mini=min(mini,sum_neg);
            if(sum < 0){
                sum=0;
            }
            if(sum_neg > 0){
                sum_neg=0;
            }
        }
        int ans=max(abs(mini),maxi);
        return ans;
    }
};