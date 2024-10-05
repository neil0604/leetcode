class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v(nums.size());
        for(int i=0;i<v.size();i++){

            for(int j=i;j>=0;j--){
                v[i]=v[i]+nums[j];
            }
        }return v;
    }
};