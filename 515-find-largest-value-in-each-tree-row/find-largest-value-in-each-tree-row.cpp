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
    void f(TreeNode* root,int level,map<int,int> &mpp){

        if(mpp.find(level)!=mpp.end())
        mpp[level]=max(mpp[level], root->val);
        else mpp[level]=root->val;
        if(root->left!=NULL) f(root->left,level+1,mpp);
        if(root->right!=NULL) f(root->right,level+1,mpp);

    }
public:
    vector<int> largestValues(TreeNode* root) {
        map<int,int> mpp;
        if(root==NULL) return {};
        f(root,0,mpp);
        vector<int> ans;
        for(auto ele : mpp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};