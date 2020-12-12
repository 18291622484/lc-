int main() {
    /*struct ListNode* partition(struct ListNode* head, int x) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        struct ListNode min; struct ListNode max;
        min.next = NULL; max.next = NULL;
        struct ListNode* pmin = &min; struct ListNode* pmax = &max;
        while (head) {
            if (head->val < x) {
                pmin->next = head;
                pmin = pmin->next;
            }
            else {
                pmax->next = head;
                pmax = pmax->next;
            }
            head = head->next;
        }
        pmax->next = NULL;
        pmin->next = max.next;
        return min.next;
    }*/
	return 0;
}