class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
       //sliding window
       bool iszero=false;
int left=0,right=0;
int maxi=0;
int zero_count=0;
      for (int right = 0; right < nums.size(); ++right) {
            // If the current element is a zero, increment the count
            if (nums[right] == 0) {
                zero_count++;
            }

            // If the window is invalid (more than one zero),
            // shrink it from the left until it's valid again.
            while (zero_count > 1) {
                if (nums[left] == 0) {
                    zero_count--;
                }
                left++;
            }
              maxi = std::max(maxi, right - left);
        }


        return maxi;
    }
};