class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double res=0;
    int left=0;
    double ans=-1e9;
        for(int i=0;i<nums.size();i++){
            res+=nums[i];
            if(i + 1  >= k){
                ans=max(ans,res/k);
                res-=nums[left];
                left++;
            }
        }
        return ans;
        
    }
};