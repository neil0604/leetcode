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
private:
    ListNode* reverse(ListNode* head){
        if(head->next==NULL || head==NULL)  {
           
         return head;
        }
        ListNode* NewHead = reverse(head->next);
        ListNode* temp = head->next;
        temp->next=head;
        head->next=NULL;
        return NewHead;

    }
public:
    int getDecimalValue(ListNode* head) {
        if(head==NULL) return 0;
    
        ListNode* newHead = reverse(head);
        int i=0;
        long sum=0;
        while(newHead != NULL){
            sum+=newHead->val*pow(2,i++);
            newHead=newHead->next;
        }
        return (int)sum;
        
    }
};