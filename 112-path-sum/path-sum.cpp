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
    bool f(TreeNode* root,int sum,int target){
        if(root->left==NULL && root->right==NULL){
          if(  sum+root->val==target) return true;
          return false;
        }
        bool left=false,right=false;
      if(root->left!=NULL) left= f(root->left,sum+root->val,target);
      if(root->right!=NULL) right= f(root->right,sum+root->val,target);

      if(left==true || right==true) return true;
      return false;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        int sum=0;
       return f(root,sum,targetSum);
    }
};