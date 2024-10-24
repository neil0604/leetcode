class Solution {
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do {
            slow = squaredSum(slow);
            fast = squaredSum(squaredSum(fast));
        } while (slow != fast);
        return slow == 1;
    }

    int squaredSum(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
};