int main() {
    //struct ListNode* reverseList(struct ListNode* head) {
    //    //头插法
    //    if (head == NULL || head->next == NULL) {
    //        return head;
    //    }
    //    struct ListNode list;
    //    list.next = NULL;
    //    struct ListNode* node = head;
    //    while (node) {
    //        struct ListNode* next = node->next;
    //        node->next = list.next;
    //        list.next = node;
    //        node = next;
    //    }
    //    return list.next;
    //    //三指针法
    //    if (head == NULL || head->next == NULL) {
    //        return head;
    //    }
    //    struct ListNode* p1 = head;
    //    struct ListNode* p2 = p1->next;
    //    struct ListNode* p3 = NULL;
    //    head->next = NULL;
    //    while (p2) {
    //        p3 = p2->next;
    //        p2->next = p1;
    //        p1 = p2;
    //        p2 = p3;
    //    }
    //    return p1;
    //}
}