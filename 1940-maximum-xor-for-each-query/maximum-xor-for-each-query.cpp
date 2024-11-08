class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size(),xorr = nums[0],maxxorr = pow(2,maximumBit)-1;
        
//int xorr=nums[0];

 vector<int>ans(n);
         ans[0]=nums[0];
        for(int i=1;i<n;i++) {ans[i]=xorr^nums[i];
        xorr=xorr^nums[i];}
 reverse(ans.begin(),ans.end());

for(int j=0;j<n;j++){
    ans[j]=ans[j]^maxxorr;
}
        return ans;
    }
};