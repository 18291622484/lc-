int main() {
    ////递归的函数
    //struct ListNode* function(struct ListNode* l1, struct ListNode* l2) {
    //    if (l1 == NULL) {
    //        return l2;
    //    }
    //    if (l2 == NULL) {
    //        return l1;
    //    }
    //    struct ListNode* node = NULL;
    //    if (l1->val < l2->val) {
    //        node = l1;
    //        l1 = l1->next;
    //    }
    //    else {
    //        node = l2;
    //        l2 = l2->next;
    //    }
    //    struct ListNode* ret = function(l1, l2);
    //    node->next = ret;
    //    return node;
    //}

    //struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    //    if (l1 == NULL) {
    //        return l2;
    //    }
    //    if (l2 == NULL) {
    //        return l1;
    //    }
    //    //递归法
    //    struct ListNode* ret = function(l1, l2);
    //    return ret;

    //    //双指针法
    //    struct ListNode list;
    //    list.next = NULL;
    //    struct ListNode* node = &list;
    //    while (l1 != NULL && l2 != NULL) {
    //        if (l1->val < l2->val) {
    //            node->next = l1;
    //            l1 = l1->next;
    //        }
    //        else {
    //            node->next = l2;
    //            l2 = l2->next;
    //        }
    //        node = node->next;
    //    }
    //    node->next = l1 == NULL ? l2 : l1;
    //    return list.next;
    //}
	return 0;
}