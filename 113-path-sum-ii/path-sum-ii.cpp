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
public:
    void helper(TreeNode* root,int target,vector<int> v,vector<vector<int>> &ans){
        if(root==NULL) return ;
         if(target==root->val && root->left==NULL && root->right==NULL) {
            v.push_back(root->val);
            ans.push_back(v);
            return ;
         }
       // if(target-root->val<0) return false;
       v.push_back(root->val);
        helper(root->left,target-root->val,v,ans);
       
       helper(root->right,target-root->val,v,ans);
     

     

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        helper(root,targetSum,v,ans);
        return ans;
    }
};