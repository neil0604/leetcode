class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLength = 0;
        vector<bool> seen(256, false); // assuming ASCII characters
        int left = 0; // left pointer of the sliding window

        for (int right = 0; right < n; right++) {
            while (seen[s[right]]) {
                seen[s[left]] = false;
                left++;
            }
            seen[s[right]] = true;
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};