class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        n = count - n;
        if (n == 0) {
            return head->next; // remove head node
        }
        temp = head;
        for (int i = 1; i < n ; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};