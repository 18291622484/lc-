int main() {
    //struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    //    if (headA == NULL || headB == NULL) {
    //        return NULL;
    //    }
    //    //计数遍历
    //    struct ListNode* a = headA;
    //    struct ListNode* b = headB;
    //    int counta = 0;
    //    int countb = 0;
    //    while (a || b) {
    //        if (a) {
    //            a = a->next;
    //            counta++;
    //        }
    //        if (b) {
    //            b = b->next;
    //            countb++;
    //        }
    //    }
    //    int count = 0;
    //    if (counta - countb > 0) {
    //        count = counta - countb;
    //        while (count--) {
    //            headA = headA->next;
    //        }
    //    }
    //    else {
    //        count = countb - counta;
    //        while (count--) {
    //            headB = headB->next;
    //        }
    //    }
    //    while ((headA != headB) && headA && headB) {
    //        headA = headA->next;
    //        headB = headB->next;
    //    }
    //    return headA;

    //    //双指针
    //    struct ListNode* pa = headA;
    //    struct ListNode* pb = headB;
    //    int flag = 0;
    //    while (pa != pb && flag != 2) {
    //        if (pa) {
    //            pa = pa->next;
    //        }
    //        else {
    //            flag++;
    //            pa = headB;
    //        }
    //        if (pb) {
    //            pb = pb->next;
    //        }
    //        else {
    //            pb = headA;
    //        }
    //    }
    //    return flag == 2 ? NULL : pa;
    //}
	return 0;
}