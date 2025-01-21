class Solution {
public:
void helper(vector<vector<int>> &ans,vector<int> v,int idx,vector<int> &nums){
if(nums.size()==idx){ 
    ans.push_back(v);
    return;

}
helper(ans,v,idx+1,nums);
v.push_back(nums[idx]);
helper(ans,v,idx+1,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(ans,{},0,nums);
        return ans;
    }
};