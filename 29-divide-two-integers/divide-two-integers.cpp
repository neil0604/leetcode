#include <limits.h>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Check for overflow
        if (divisor == 0) {
            return INT_MAX; // Division by zero
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; // Overflow case
        }

        // Determine the sign of the result
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        // Use long to handle overflow in absolute values
        long long absDividend = labs(dividend);
        long long absDivisor = labs(divisor);
        long long quotient = 0;

        // Perform division using bit manipulation
        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1; // Double the divisor
                multiple <<= 1; // Double the multiple
            }
            absDividend -= temp; // Reduce dividend
            quotient += multiple; // Increase quotient
        }

        return isNegative ? -quotient : quotient; // Apply the sign
    }
};