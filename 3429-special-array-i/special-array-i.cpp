class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
       // int i=0;
        int j=1;
        int n=nums.size();
        while(j<n){
            if(nums[j]%2==0 && nums[j-1]%2==1){
                j++;
           // i++;
                continue;
            }else if(nums[j]%2==1 && nums[j-1]%2==0){
                j++;
           // i++;
                continue;
            }else return false;
            
        }
        return true;
    }
};