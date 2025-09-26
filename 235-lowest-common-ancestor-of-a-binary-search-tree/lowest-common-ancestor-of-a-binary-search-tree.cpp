/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
TreeNode* helper(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==p || root==q || root==NULL) return root;

        // tree traversal
      TreeNode* left =  helper(root->left,p,q);

     TreeNode* right =   helper(root->right,p,q);

     if(left!=NULL && right!=NULL) return root;
     else if(left!=NULL) return left;
      if(right!=NULL) return right;

     return NULL;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       return helper(root,p,q);
    }
};