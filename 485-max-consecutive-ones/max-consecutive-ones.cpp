class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int cnt=0;
        int maxfre=0;
        while(i<n){
          if(  nums[i]==1){
            cnt++;
          }else{
            cnt=0;
          }
          maxfre=max(maxfre,cnt);
          i++;
        }
        return maxfre;
    }
};