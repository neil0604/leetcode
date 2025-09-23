/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
private:
    void f(Node* root,int level,map<int,Node*>& mpp){

       if(mpp.find(level)!=mpp.end()){
         mpp[level]->next=root;

        mpp[level]=mpp[level]->next;
       }
       else mpp[level]=root;

       // traversal of tree
       if(root->left!=NULL) f(root->left,level+1,mpp);
       if(root->right!=NULL) f(root->right,level+1,mpp);
    }
public:
    Node* connect(Node* root) {
        if(root==NULL) return root;
        map<int,Node*> mpp;
        f(root,0,mpp);

        return root;
    }
};