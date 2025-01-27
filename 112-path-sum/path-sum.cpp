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
    bool helper(TreeNode* root,int target){
        if(root==NULL) return false;
         if(target==root->val && root->left==NULL && root->right==NULL) return true;
       // if(target-root->val<0) return false;
      bool a =  helper(root->left,target-root->val);
       
     bool  b =   helper(root->right,target-root->val);
     

     return a || b;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       return helper(root,targetSum);
    }
};