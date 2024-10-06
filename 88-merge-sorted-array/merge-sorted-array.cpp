class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v(m + n);
        int a = 0;
        int b = 0;
        int i = 0;
        for (i = 0; i < (m + n); i++) {
            if (a >= m) {
                v[i] = nums2[b++];
            } else if (b >= n) {
                v[i] = nums1[a++];
            } else if (nums1[a] > nums2[b]) {
                v[i] = nums2[b++];
            } else {
                v[i] = nums1[a++];
            }
        }
        nums1 = v; // update nums1 with the merged result
    }
};