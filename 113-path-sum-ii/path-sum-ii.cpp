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
    void f(TreeNode* root,int sum,int target,vector<int> &ans,vector<vector<int>> & result){
        if(root->left==NULL && root->right==NULL){
          if(  sum+root->val==target) {
            ans.push_back(root->val);
            result.push_back(ans);
            ans.pop_back();
            return ;
          }
         
        }
       // bool left=false,right=false;
       ans.push_back(root->val);
      if(root->left!=NULL)  f(root->left,sum+root->val,target,ans,result);
      if(root->right!=NULL)  f(root->right,sum+root->val,target,ans,result);
      ans.pop_back();

      
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL) return {};
        vector<int> ans;
        vector<vector<int>> result;

        f(root,0,targetSum,ans,result);
        return result;
    }
};