class Solution {
public:
    int findFinalValue(vector<int>& nums, int k) {
        int n=nums.size();
        bool flag=true;
        while(flag){
        for(int i=0;i<n;i++){
            if(nums[i]==k){
                flag=true;
                break;
            }else flag=false;
        }
        if(flag) k=k*2;
        
    }
    return k;
    }
};