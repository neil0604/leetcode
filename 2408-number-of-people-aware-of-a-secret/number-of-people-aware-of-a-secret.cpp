class Solution {

public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        // Define the modulo constant
        long long MOD = 1e9 + 7;
        
        // dp[i] = number of new people who learn the secret on day i
        // Use n+1 for 1-based indexing
        std::vector<long long> dp(n + 1, 0);

        // Base case: One person learns on day 1
        dp[1] = 1;

        // Number of people who are currently able to share the secret
        long long sharing_count = 0;

        // Iterate from day 2 to n
        for (int i = 2; i <= n; ++i) {
            // Add people who can start sharing today
            if (i - delay > 0) {
                sharing_count = (sharing_count + dp[i - delay]) % MOD;
            }

            // Subtract people who forget today and can no longer share
            if (i - forget > 0) {
                // Add MOD before subtracting to prevent negative results
                sharing_count = (sharing_count - dp[i - forget] + MOD) % MOD;
            }

            // The number of new people today is the number of people sharing
            dp[i] = sharing_count;
        }

        // The answer is the sum of people who learned the secret
        // and have not forgotten it by day n.
        long long total_aware = 0;
        for (int i = n - forget + 1; i <= n; ++i) {
            total_aware = (total_aware + dp[i]) % MOD;
        }

        return total_aware;
    }

};