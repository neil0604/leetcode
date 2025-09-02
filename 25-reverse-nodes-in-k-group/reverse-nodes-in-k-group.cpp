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
   ListNode* find(ListNode * head,int k){
        int i=1;
        
        while(head!=NULL && i<k){
            i++;
            head=head->next;
        }
        return head;
    }
private:
    ListNode* reverse(ListNode* head){

        if(head->next==NULL){
            return head;
        }

        ListNode * newHead = reverse(head->next);
        ListNode * temp = head->next;
        temp->next=head;
        head->next=NULL;

        return newHead;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
      

      ListNode* prevNode=new ListNode(0);
      ListNode* dummy=prevNode;
      ListNode* curr=head, * nextNode;

      while(curr!=NULL){

        ListNode* currEnd = find(curr,k);
        if(currEnd==NULL) break;
        nextNode=currEnd->next;
        currEnd->next=NULL;

        reverse(curr);

        if(curr==head) {
        head=currEnd;
        curr->next=nextNode;
        prevNode->next=currEnd;
        prevNode=curr;
        curr=nextNode;
        }
        else {
            curr->next=nextNode;
        prevNode->next=currEnd;
        prevNode=curr;
        curr=nextNode;
        }


      }





      return dummy->next;
    }
};