class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
long long maxfre=0,l=0,r=0,size=0;
int n=nums.size();
        while(r<n){
            size+=nums[r];
            while(l<=r && (nums[r]*(r-l+1) > size+k)){
                size-=nums[l];
                l++;
            }
            
            maxfre=max(maxfre,(r-l+1));
            r++;
        }
        return maxfre;
    }
};