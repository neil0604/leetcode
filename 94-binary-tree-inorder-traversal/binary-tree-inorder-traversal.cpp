
class Solution {
    void display(TreeNode* root,vector<int> &v){
    if(root==NULL) return;
   // cout<<root->val<<" ";
   
    display(root->left,v);
    v.push_back(root->val);
    display(root->right,v);
    
}
public:
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> v;
        display(root,v);
        return v;
    }
};