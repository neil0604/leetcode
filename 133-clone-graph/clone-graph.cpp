/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        // bfs using
        if(node==NULL) return node;
        Node* copy=new Node(node->val);
        unordered_map<Node*,Node*> mp;

        //applying bfs

        queue<Node*> q;
        q.push(node);
        mp[node] = copy;


        while(!q.empty()){
            Node* ori=q.front();
            q.pop();

            Node* tempCopy=mp[ori];

            for(Node* n : ori->neighbors){
                if(mp.find(n)==mp.end()){
                    Node* clone=new Node(n->val);
                    mp[n]=clone;
                    tempCopy->neighbors.push_back(clone);
                    q.push(n);
                }
                else{
                    tempCopy->neighbors.push_back(mp[n]);
                }
            }

        }


        return copy;
    }
};