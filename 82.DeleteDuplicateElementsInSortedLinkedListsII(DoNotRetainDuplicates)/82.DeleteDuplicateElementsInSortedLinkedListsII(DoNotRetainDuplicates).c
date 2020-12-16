int main() {
    ////递归的函数
    //struct ListNode* function(struct ListNode* head, int* flag) {
    //    if (head == NULL) {
    //        return NULL;
    //    }
    //    struct ListNode* node = head;
    //    head = head->next;
    //    struct ListNode* ret = function(head, flag);
    //    if (ret) {
    //        if (node->val == ret->val) {
    //            *flag = 1;
    //            node->next = ret->next;
    //            free(ret);
    //        }
    //        else if (*flag) {
    //            *flag = 0;
    //            node->next = ret->next;
    //            free(ret);
    //        }
    //    }
    //    return node;
    //}
    //struct ListNode* deleteDuplicates(struct ListNode* head) {
    //    if (head == NULL || head->next == NULL) {
    //        return head;
    //    }
    //    //递归法
    //    int flag = 0;
    //    struct ListNode* ret = function(head, &flag);
    //    return flag == 1 ? ret->next : ret;


    //    //迭代法
    //    struct ListNode list;
    //    list.next = head;
    //    struct ListNode* start = head;
    //    struct ListNode* end = head->next;
    //    struct ListNode* flag = &list;
    //    int count = 0;
    //    while (end) {
    //        if (start->val == end->val) {
    //            free(start);
    //            flag->next = start = end;
    //            end = end->next;
    //            count++;
    //        }
    //        else if (count) {
    //            free(start);
    //            flag->next = start = end;
    //            end = end->next;
    //            count = 0;
    //        }
    //        else {
    //            flag = start;
    //            start = end;
    //            end = end->next;
    //        }
    //    }
    //    if (count) {
    //        free(start);
    //        flag->next = NULL;
    //    }
    //    return list.next;
    //}
	return 0;
}