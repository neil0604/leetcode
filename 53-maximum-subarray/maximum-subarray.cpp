class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            int max_sum = nums[0]; // Initialize max_sum with the first element
        int current_sum = nums[0]; // Initialize current_sum with the first element

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            // Update current_sum to either the current element or the sum of current_sum and the current element
            current_sum = max(nums[i], current_sum + nums[i]);
            // Update max_sum if current_sum is greater
            max_sum = max(max_sum, current_sum);
        }

        return max_sum; // Return the maximum subarray sum
    
    }
};