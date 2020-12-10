int main() {
    //struct ListNode* middleNode(struct ListNode* head) {
    //    //常规做法，两次循环
    //    if (head->next == NULL) {
    //        return head;
    //    }
    //    struct ListNode* node = head;
    //    int count = 0;
    //    while (node) {
    //        node = node->next;
    //        count++;
    //    }
    //    count = count / 2 + 1;
    //    while (count > 1) {
    //        head = head->next;
    //        count--;
    //    }
    //    return head;

    //    //快慢指针法
    //    struct ListNode* fast = head;
    //    struct ListNode* slow = head;
    //    while (fast != NULL && fast->next != NULL) {
    //        slow = slow->next;
    //        fast = fast->next->next;
    //    }
    //    return slow;
    //}
	return 0;
}