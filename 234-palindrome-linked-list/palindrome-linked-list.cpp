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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* pre=NULL;
        ListNode* NEXT=head;
        while(curr){
            NEXT=NEXT->next;
            curr->next=pre;
            pre=curr;
            curr=NEXT;

        }
        return pre;
        
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        while(fast!=NULL && fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        slow=reverseList(slow);
        temp=head;
        while(temp){
            if(temp->val!=slow->val){
                return false;
            }
            slow=slow->next;
            temp=temp->next;
        }
        return true;
    }
};