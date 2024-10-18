#include <string>
#include <climits> // For INT_MAX and INT_MIN
#include <cstdlib> // For atoi
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0; // Index to traverse the string
        int n = s.size();
        
        // Skip leading whitespaces
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // Check if the string is empty after trimming spaces
        if (i == n) return 0;

        // Handle sign
        bool minus = false;
        if (s[i] == '-') {
            minus = true;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        // Convert to integer
        long long result = 0; // Use long long to handle overflow
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            i++;
            
            // Check for overflow/underflow
            if (result > INT_MAX) {
                return minus ? INT_MIN : INT_MAX;
            }
        }

        return minus ? -result : result; // Apply sign
    }
};