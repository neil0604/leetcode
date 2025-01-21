class Solution {
public:
    void helper(vector<vector<int>> &ans,vector<int> v,int idx,vector<int> &c,int target){
        if(target==0){
            ans.push_back(v);
            return;
        }else if(target<0){
            return;
        }
        for(int i=idx;i<c.size();i++){
            v.push_back(c[i]);
            helper(ans,v,i,c,target-c[i]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans;
        helper(ans,{},0,c,target);
        return ans;
    }
};