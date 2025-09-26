class Solution {
public:
    int triangleNumber(vector<int>& nums) {
         if (nums.size() < 3) {
            return 0;
        }

        // 1. Sort the array. This is crucial for the two-pointer approach.
        std::sort(nums.begin(), nums.end());

        int count = 0;
        int n = nums.size();

        // 2. Iterate from the back, fixing the largest side 'c' (nums[k]).
        for (int k = n - 1; k >= 2; --k) {
            int c = nums[k];
            
            // 3. Use two pointers to find pairs (a, b) such that a + b > c.
            int left = 0;   // Pointer for the smallest side 'a'
            int right = k - 1; // Pointer for the middle side 'b'

            while (left < right) {
                int a = nums[left];
                int b = nums[right];

                if (a + b > c) {
                    // 4. If (a, b, c) is a valid triangle, then all pairs
                    // (nums[left...right-1], nums[right], c) are also valid.
                    // There are 'right - left' such pairs.
                    count += (right - left);
                    
                    // Move 'right' inwards to try a smaller middle side 'b'.
                    right--;
                } else {
                    // 5. If the sum is too small, move 'left' outwards
                    // to try a larger smallest side 'a'.
                    left++;
                }
            }
        }
        return count;
    }
};