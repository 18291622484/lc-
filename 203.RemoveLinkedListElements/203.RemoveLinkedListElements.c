int main() {
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    //����һ��
//    //��ͷ����ɸѡ
//    while (head != NULL && head->val == val) {
//        struct ListNode* node = head;
//        head = head->next;
//        free(node);
//    }
//    //�Է�ͷ����ɸѡ
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
//    //��������
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