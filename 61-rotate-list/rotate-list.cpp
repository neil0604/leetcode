class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return NULL;
        ListNode* tail = head;
        int n = 1;
        while (tail->next != NULL) {
            tail = tail->next;
            n++;
        }
        k = k % n;
        ListNode* temp = head;
        for (int m = 1; m < n - k ; m++) {
            temp = temp->next;
        }
        tail->next = head;
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};