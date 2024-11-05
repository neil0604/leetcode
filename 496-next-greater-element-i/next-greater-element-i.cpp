class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++){
            int j=0;
            while(nums1[i]!=nums2[j]){
                j++;
            }j+=1;
            while(j<m){
                if(nums1[i]<nums2[j]){
                    ans[i]=nums2[j];
                    break;
                }
                else j++;
            }
           

            }
            return ans;
        }
    
};