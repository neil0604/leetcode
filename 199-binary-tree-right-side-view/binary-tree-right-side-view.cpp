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
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void helper(TreeNode* root,int curr,int lev,vector<int> &v){
        if(root==NULL) return;
        if(curr==lev) {v[curr-1]=root->val;
        return;}
        helper(root->left,curr+1,lev,v);
        helper(root->right,curr+1,lev,v);

    }
    vector<int> rightSideView(TreeNode* root) {
        int lev=level(root);
vector<int> v(lev);
        for(int i=1;i<=lev;i++){
            helper(root,1,i,v);
        }
        return v;
    }
};