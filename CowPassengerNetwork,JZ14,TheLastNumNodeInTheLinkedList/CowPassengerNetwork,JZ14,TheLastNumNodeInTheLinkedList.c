int main() {
    //struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
    //    //Ë«Ñ­»·
    //    if (pListHead == NULL) {
    //        return pListHead;
    //    }
    //    struct ListNode* next = pListHead;
    //    struct ListNode* node = pListHead;
    //    int count = 0;
    //    while (next) {
    //        next = next->next;
    //        count++;
    //    }
    //    if (count < k) {
    //        return NULL;
    //    }
    //    count = count - k + 1;
    //    while (--count > 0) {
    //        node = node->next;
    //    }
    //    return node;

    //    //Ë«Ö¸Õë
    //    if (pListHead == NULL) {
    //        return pListHead;
    //    }
    //    struct ListNode* fast = pListHead;
    //    struct ListNode* slow = pListHead;
    //    int count = 0, num = 0;
    //    while (fast) {
    //        fast = fast->next;
    //        count++, num++;
    //        if (count == k + 1) {
    //            count--;
    //            slow = slow->next;
    //        }
    //    }
    //    if (num < k) {
    //        return NULL;
    //    }
    //    return slow;
    //}
	return 0;
}