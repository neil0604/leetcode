
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> v;
        stack<TreeNode*> st;
        if(root!=NULL) st.push(root);
        while(st.size()>0){
            TreeNode* temp=st.top();
            v.push_back(temp->val);
            st.pop();
            if(temp->right!=NULL) st.push(temp->right);
             if(temp->left!=NULL) st.push(temp->left);

        }
        return v;

        
    }
};