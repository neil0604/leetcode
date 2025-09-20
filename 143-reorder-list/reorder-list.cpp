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
    ListNode* reverse(ListNode* head){
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* newHead=reverse(head->next);
        ListNode* temp=head->next;
        temp->next=head;
        head->next=NULL;
        return newHead;
    }
public:
    void reorderList(ListNode* head) {
        //find the middle first

        ListNode* slow=head;
        ListNode* fast=head;
        

        fast=fast->next;

        while(fast!=NULL && fast->next != NULL){
            
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        slow->next=NULL;
        ListNode* second  = reverse(mid);

        // merging alternatively the 2 linked list
    ListNode* first=head;
    ListNode* temp=first;
    first=first->next;
        while(first != NULL && second != NULL){

        temp->next=second;
        second=second->next;
        temp=temp->next;

        temp->next=first;
        first=first->next;
        temp=temp->next;
    }
    if(second != NULL) temp->next=second ;
    }
};