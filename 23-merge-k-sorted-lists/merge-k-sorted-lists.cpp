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
    ListNode* merge(ListNode* list1, ListNode* list2) {
        
        ListNode* temp=new ListNode(0);
        ListNode* head=temp;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
              //  ListNode* node=new ListNode(list1->val);
                temp->next=list1;
                list1=list1->next;
            }
            else{
              //    ListNode* node=new ListNode(list2->val);
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;

        }
        while(list1!=NULL){
            temp->next=list1;
            list1=list1->next;
            temp=temp->next;
        }
        while(list2!=NULL){
            temp->next=list2;
            list2=list2->next;
            temp=temp->next;
        }head=head->next;
        return head;
    }
public:

    ListNode* mergeKLists(vector<ListNode*>& lists) {
     //   int n=lists.size();
        if(lists.size()==0) return NULL;
      //  if(n==1) return lists[0];
        while(lists.size()>1){
      //  ListNode* a=lists[lists.size()-1];  <- done from end
      ListNode* a=lists[0];
       // lists.pop_back();  <- this is done from behind
       // doing from start
       lists.erase(lists.begin());
      //  ListNode* b=lists[lists.size()-1];
      ListNode* b=lists[0];
       // lists.pop_back();
       lists.erase(lists.begin());
        ListNode* c=merge(a,b);
        lists.push_back(c);

    }
    return lists[0];
    }
};