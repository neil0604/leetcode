class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int sum = 0;
        int maxSum = 0;
        int windowSum = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                sum += customers[i];
            }
            windowSum += customers[i] * grumpy[i];

            if (i >= minutes) {
                windowSum -= customers[i - minutes] * grumpy[i - minutes];
            }

            maxSum = max(maxSum, windowSum);
        }

        return sum + maxSum;
    }
};