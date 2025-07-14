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
    ListNode* reverse(ListNode* head,ListNode* &tail){
        if(head->next==NULL || head==NULL)  {
            tail=head;
         return head;
        }
        ListNode* temp = reverse(head->next,tail);
        temp->next=head;
        head->next=NULL;

        temp=head;



        return temp;

    }
public:
    int getDecimalValue(ListNode* head) {
        if(head==NULL) return 0;
        ListNode* tail;
        ListNode* newHead = reverse(head,tail);
        int i=0;
        int sum=0;
        while(tail!=NULL){
            sum+=tail->val*pow(2,i++);
           tail = tail->next;
        }
        return sum;
        
    }
};