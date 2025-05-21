class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& q) {
        int m = nums.size();
       int n = q.size();

       vector<int> diff(m+1);

       for(int i=0;i<n;i++){
        int first = q[i][0];
        int sec   = q[i][1];
        diff[first]++;
        diff[sec+1]--;

       }
       //prefix sum
       for(int i=1;i<m+1;i++){
        diff[i]=diff[i-1]+diff[i];
       }

       for(int ele : diff){
        cout<<ele<<" ";
       }

       for(int i=0;i<m;i++){
        
        nums[i]=nums[i]-diff[i];

        if(nums[i] <= 0) nums[i]=0;

       }

         for(int ele : nums){
       // cout<<ele<<" ";
       if(ele != 0) return false;
       }
       return true;
    }
};