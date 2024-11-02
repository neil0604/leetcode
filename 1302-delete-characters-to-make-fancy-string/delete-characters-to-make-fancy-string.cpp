class Solution {
public:
    string makeFancyString(string s) {
        string ans;
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            if (i >= 2 && s[i] == s[i - 1] && s[i - 1] == s[i - 2]) {
                continue; // Skip if three consecutive characters are the same
            }
            ans += s[i];
        }

        return ans;
    }
};