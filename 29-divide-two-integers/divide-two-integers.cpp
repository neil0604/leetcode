#include <limits.h>

class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if (divisor == 0) {
            return INT_MAX; 
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }

        
        bool isNegative = (dividend < 0) ^ (divisor < 0);

       
        long long absDividend = labs(dividend);
        long long absDivisor = labs(divisor);
        long long quotient = 0;

        
        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;
            while (absDividend >= (temp << 1)) {
                temp <<= 1; 
                multiple <<= 1; 
            }
            absDividend -= temp; 
            quotient += multiple; 
        }

        return isNegative ? -quotient : quotient; 
    }
};