class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
        //prefix xum
        for(int i=1;i<n;i++){
            nums[i]=nums[i]+nums[i-1];
        }
        int m=q.size();
      vector<int> ans(m);
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(q[i]<nums[j]){
                ans[i]=j;
                break;
            }
            if(j==n-1) ans[i]=n;
        }
      }
      return ans;
    }
};