/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        // make a LL without random
        Node* temp=head;
        Node* dummy=new Node(0);
        Node* tempc=dummy;
        while(temp!=NULL){
            Node* dummy1=new Node(temp->val);
            tempc->next=dummy1;
           tempc= tempc->next;
           temp=temp->next;
        }
        //creating map
        Node* a=head;
        Node* b=dummy->next;
        unordered_map<Node*,Node*> mp;
        while(a!=NULL){
            mp[a]=b;
            a=a->next;
            b=b->next;
        }
        for(auto ele : mp){
            Node* ori=ele.first;
            Node* dup=ele.second;
            Node* orinext=ori->random;
            if(orinext!=NULL){
            if(mp.find(orinext)!=mp.end()){
                dup->random=mp[orinext];
            }
            }else dup->random=NULL;

        }
        return dummy->next;

    }
};