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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* dummy=new ListNode(1e9);
        dummy->next=head;
        int size=0;
        if(head==NULL) return NULL;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        cout<<size<<" ";
        if(size==1 && n==1) return head=NULL;

        temp=head;

        size=size-n;
        cout<<size<<" ";
        if(size==0) dummy->next=dummy->next->next;
        int k=1;
        while(k<size){
            temp=temp->next;
            k++;
        }
        cout<<endl<<temp->val;
        if(temp->next != NULL) 
        temp->next=temp->next->next;
        return dummy->next;
    }
};