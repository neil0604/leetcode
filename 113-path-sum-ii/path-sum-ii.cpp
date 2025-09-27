/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void helper(TreeNode* root,int target,vector<int> &ans,vector<vector<int>>& res,int sum ){
        if(root==NULL) return ;
        if(root->left==NULL && root->right==NULL){
            // leaf node
            ans.push_back(root->val);
            sum+=root->val;
            if(sum==target){
                res.push_back(ans);
            }
            sum-=root->val;
            ans.pop_back();
            return;
        }
        // traversal
        ans.push_back(root->val);
        sum+=root->val;
        helper(root->left,target,ans,res,sum);
         helper(root->right,target,ans,res,sum);
        sum-=root->val;
        ans.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> ans;
        vector<vector<int>> res;
        helper(root,targetSum,ans,res,0);
        return res;
    }
};