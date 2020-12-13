int main() {
    ////递归的函数
    //struct ListNode* slow = NULL;
    //bool function(struct ListNode* head) {
    //    struct ListNode* node = head;
    //    if (node == NULL) {
    //        return true;
    //    }
    //    struct ListNode* temp = node;
    //    node = node->next;
    //    if (!function(node)) {
    //        return false;
    //    }
    //    if (slow->val != temp->val) {
    //        return false;
    //    }
    //    slow = slow->next;
    //    return true;
    //}

    //bool isPalindrome(struct ListNode* head) {
    //    if (head == NULL || head->next == NULL) {
    //        return true;
    //    }
    //    //递归
    //    slow = head;
    //    return function(head);

    //    //将后一半元素指向逆转，再判断
    //    struct ListNode* fast = head;
    //    struct ListNode* slow = head;
    //    struct ListNode* temp = NULL;
    //    while (fast && fast->next) {
    //        fast = fast->next->next;
    //        temp = slow;
    //        slow = slow->next;
    //    }
    //    temp->next = NULL;
    //    struct ListNode* p1 = slow;
    //    struct ListNode* p2 = p1->next;
    //    struct ListNode* p3 = NULL;
    //    while (p2) {
    //        p3 = p2->next;
    //        p2->next = p1;
    //        p1 = p2;
    //        p2 = p3;
    //    }
    //    struct ListNode* node = head;
    //    while (node) {
    //        if (p1->val != node->val) {
    //            return false;
    //        }
    //        p1 = p1->next;
    //        node = node->next;
    //    }
    //    return true;
    //}
	return 0;
}