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
    void display(TreeNode* root,vector<int> &v){
    if(root==NULL) return;
   // cout<<root->val<<" ";
   v.push_back(root->val);
    display(root->left,v);
    display(root->right,v);
    
}
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        display(root,v);
        return v;
    }
};