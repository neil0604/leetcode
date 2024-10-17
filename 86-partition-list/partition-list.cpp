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
    ListNode* partition(ListNode* temp, int x) {
        ListNode* less=new ListNode(20);
        ListNode* less1=less;
        ListNode* more=new ListNode(10);
        ListNode* more1=more;

        
    //ListNode* temp=head;

        while(temp){
            if(temp->val<x){
                less->next=temp;
                less=less->next;
            }
            else {more->next=temp;
            more=more->next;}
            temp=temp->next;

        }

        less->next=more1->next;
        more->next=NULL;
        return less1->next;
        
    }
};