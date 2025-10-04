#include <vector>
#include <algorithm>

class Solution {
private:
    // Signature changed: removed unused parameters, added the dp vector
    int helper(vector<int>& coins, int amt, vector<int>& dp) {
        // Base cases are perfect, no change needed
        if (amt == 0) return 0;
        if (amt < 0) return 1e9;

        // 1. ADDED: DP check to return the stored answer if we've solved this 'amt' before
        if (dp[amt] != -2) {
            return dp[amt];
        }

        // 2. MODIFIED: 'mini' is now a local variable for this specific function call
        int mini = 1e9;

        // Operations
        for (int coin : coins) {
            // 3. MODIFIED: The logic inside the loop is slightly adjusted for correctness
            int res = helper(coins, amt - coin, dp);
            if (res != 1e9) {
                mini = min(mini, 1 + res);
            }
        }
        
        // 4. ADDED: Store the computed result in the dp array before returning
        return dp[amt] = mini;
    }

public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        
        // 5. ADDED: Initialize a dp array to store results.
        // We use -2 to mean "not yet computed".
        vector<int> dp(amount + 1, -2);
        
        // 6. MODIFIED: Call the updated helper function
        int res = helper(coins, amount, dp);
        
        // Use >= to be safe, as 1 + 1e9 could cause an overflow
        if (res >= 1e9) return -1;
        return res;
    }
};