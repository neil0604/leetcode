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
    bool helper(TreeNode* p,TreeNode* q){
        if(p==NULL && q==NULL) return true;
        if(p!=NULL && q==NULL) return false;
        if(p==NULL && q!=NULL) return false;
        if(p->val!=q->val) return false;

      bool a=  helper(p->left,q->right);
        if(a==false) return false;
        bool b = helper(p->right,q->left);
        if(b==false) return false;

        return true;
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* p=root->left;
        TreeNode* q=root->right;
      return  helper(p,q);
    }
};