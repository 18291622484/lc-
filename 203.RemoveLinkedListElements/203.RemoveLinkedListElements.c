int main() {
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    //方法一：
//    //对头结点的筛选
//    while (head != NULL && head->val == val) {
//        struct ListNode* node = head;
//        head = head->next;
//        free(node);
//    }
//    //对非头结点的筛选
//    struct ListNode* node = head;
//    while (node != NULL && node->next != NULL) {
//        if (node->next->val == val) {
//            struct ListNode* next = node->next;
//            struct ListNode* nextnext = next->next;
//            free(next);
//            node->next = nextnext;
//        }
//        else {
//            node = node->next;
//        }
//    }
//    
//    //方法二：
//    struct ListNode _head;
//    _head.next = head;
//    head = &_head;
//    struct ListNode* node = head;
//    while (node != NULL && node->next != NULL) {
//        if (node->next->val == val) {
//            struct ListNode* next = node->next;
//            struct ListNode* nextnext = next->next;
//            free(next);
//            node->next = nextnext;
//        }
//        else {
//            node = node->next;
//        }
//    }
//    return head->next;
//}
	return 0;
}