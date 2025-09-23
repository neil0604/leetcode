/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* dummy=new ListNode(1e9);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* temp=head;
        while(temp != NULL){

            while(temp != NULL && temp->val==val){
                temp=temp->next;
            }
            prev->next=temp;
            prev=temp;
          if(temp!=NULL)  temp=temp->next;
        }
        return dummy->next;
    }
};