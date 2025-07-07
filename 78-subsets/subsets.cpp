class Solution {
private:
    void f(int i,vector<vector<int>>& result,vector<int> ans,vector<int>& nums){
        if(i==nums.size()){
            result.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        f(i+1,result,ans,nums);
        ans.pop_back();
        f(i+1,result,ans,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> ans;
        f(0,result,ans,nums);

        return result;
        
    }
};