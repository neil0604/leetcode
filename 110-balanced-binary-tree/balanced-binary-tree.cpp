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
    int height1(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(height1(root->left),height1(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;

       int a=height1(root->left);
       int b=height1(root->right);
       int dif=abs(a-b);
       if(dif > 1) return false;
      bool a1 = isBalanced(root->left);
       if(a1==false) return false;
     bool b1=  isBalanced(root->right);
       if(b1==false) return false;

       return true;
       
    }
};