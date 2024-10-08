class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int maxi = -1000;
        int idx = -1000;

        for (int num : nums) {
            countMap[num]++;
            if (countMap[num] > maxi) {
                maxi = countMap[num];
                idx = num;
            }
        }

        return idx;
    }
};