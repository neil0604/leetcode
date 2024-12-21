
class Solution {
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
void helper(TreeNode* root,int curr,int level,vector<int> &v){
    if(root==NULL) return ;

    if(level==curr){
        
         v.push_back(root->val);
         return;
    }
    helper(root->left,curr+1,level,v);
      helper(root->right,curr+1,level,v);
}

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vv;
        int level1 =level(root);
        for(int i=1;i<=level1;i++){
            vector<int> v;
        helper(root,1,i,v);
        vv.push_back(v);
    }
    
    return vv;
    }
};