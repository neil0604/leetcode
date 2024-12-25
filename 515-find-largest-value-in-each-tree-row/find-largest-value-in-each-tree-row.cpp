
class Solution {
int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
void levelorder(TreeNode* root,int curr,int level,vector<int> &v){
    if(root==NULL) return ;
    if(curr==level){
        if(v[curr-1] < root->val){
            v[curr-1]=root->val;
            return ;
        }
    }
    levelorder(root->left,curr+1,level,v); 
    levelorder(root->right,curr+1,level,v); 
}
public:
    vector<int> largestValues(TreeNode* root) {
        int lv=level(root);
        vector<int> v(lv,INT_MIN);
        for(int i=1;i<=lv;i++){
            levelorder(root,1,i,v);
        }
        return v;
    }
};