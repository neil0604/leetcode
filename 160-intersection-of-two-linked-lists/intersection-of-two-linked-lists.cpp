/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int count1=0;
        int count2=0;
        while(temp1!=NULL){
            count1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            count2++;
            temp2=temp2->next;
        }
        int l=0;
        temp1=headA;
        temp2=headB;
        if(count1>count2) {l=count1-count2;
         for(int i=0;i<l;i++){

            temp1=temp1->next;
        }}
        else {l=count2-count1;
         for(int i=0;i<l;i++){

            temp2=temp2->next;
        }
        }
        while(temp1!=temp2){
            if(temp1==NULL || temp2==NULL) return NULL;
            temp1=temp1->next;
            temp2=temp2->next;
        }
       return temp1;
    }
};