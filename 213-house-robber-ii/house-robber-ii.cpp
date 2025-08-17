class Solution {
private:
    int f(int idx,vector<int> &num,vector<int> &dp){
        if(idx==0) return num[idx];
        if(idx<0) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int pick = num[idx];
       if(idx>1) pick+= f(idx-2,num,dp);
      
       int notpick = 0 + f(idx-1,num,dp);

       return dp[idx] = max(pick,notpick);
    }
public:
    int rob(vector<int>& nums) {

        
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp(n+1,-1);
         vector<int> dp1(n+1,-1);
        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            if(i!=0) v1.push_back(nums[i]);
            if(i!=n-1) v2.push_back(nums[i]);
        }

       return max(f(n-2,v1,dp),f(n-2,v2,dp1));

    }
};