class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int maxi=0;
        int n=nums.size();
        int nozero=0;
        int left=0,right=0;
        while(right<n){

            if(nums[right]==0){

                nozero++;
             
            }

            if(nozero > k){
                    while(nums[left] != 0) {
                        left++;

                    }
                    
                    if(nums[left]==0) nozero--;
                    left++;

            }




            maxi=max(maxi,right-left+1);

            right++;
        }

        return maxi;
        
    }
};