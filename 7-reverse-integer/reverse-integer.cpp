class Solution {
public:
    int reverse(int x) {
        
        if(x <= INT_MIN || x >= INT_MAX) return 0;
        int n = abs(x);
        
        long long p = 0; 
        long long d;
        while (n > 0) {
            d = n % 10;
            p = p * 10 + d;
            n /= 10;
        }
        if(p < INT_MIN || p > INT_MAX) return 0;
        if (x < 0) p = -p;
        return (int)p; 
    }
};