int main() {
    ////ʹ�����ַ�ʽ���������������ͣ��������Ժܷ�����޸ĺ������ݵ��������ͣ��൱��#define������
    //typedef struct TreeNode* QueueType;
    ////��������
    //typedef struct Queue {
    //    //���б��������
    //    QueueType _date;
    //    //ָ����һ������ָ��
    //    struct Queue* _next;
    //}Queue;
    ////����ͷ���
    //typedef struct QueueHead {
    //    //ͷ����д������ָ��
    //    //ָ���׽ڵ��ָ��
    //    Queue* _head;
    //    //ָ��β����ָ��
    //    Queue* _tail;
    //}QHead;
    ////�������к���������
    //// ��ʼ������ 
    //void QueueInit(QHead * q);
    ////�������
    //Queue* QueueCenter(QueueType val);
    //// ��β����� 
    //void QueuePush(QHead * q, QueueType val);
    //// ��ͷ������ 
    //void QueuePop(QHead * q);
    //// ��ȡ����ͷ��Ԫ�� 
    //QueueType QueueFront(QHead * q);
    //// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
    //int QueueEmpty(QHead * q);

    //// ��ʼ������ 
    //void QueueInit(QHead * q) {
    //    //�����Ϸ��Լ���
    //    if (q == NULL) {
    //        return;
    //    }
    //    //��ʼ�����
    //    q->_head = q->_tail = NULL;
    //}
    ////�������
    //Queue* QueueCenter(QueueType val) {
    //    Queue* newNode = (Queue*)malloc(sizeof(Queue));
    //    newNode->_date = val;
    //    newNode->_next = NULL;
    //    return newNode;
    //}
    //// ��β����� 
    //void QueuePush(QHead * q, QueueType val) {
    //    //�����Ϸ��Լ���
    //    if (q == NULL) {
    //        return;
    //    }
    //    //�������������
    //    //���һ��Ԫ�ض�û�У���ô����ͷָ���βָ��ָ�����Ľڵ�
    //    if (q->_head == NULL) {
    //        q->_head = q->_tail = QueueCenter(val);
    //        return;
    //    }
    //    //�����Ԫ�أ���ô����β���������һ��Ԫ�أ����޸�βָ��ָ��
    //    q->_tail->_next = QueueCenter(val);
    //    q->_tail = q->_tail->_next;
    //}
    //// ��ͷ������ 
    //void QueuePop(QHead * q) {
    //    //�����Ϸ��Լ���
    //    if (q == NULL) {
    //        return;
    //    }
    //    //����ͷ���
    //    Queue* node = q->_head;
    //    //�޸�ͷ���ָ��
    //    q->_head = node->_next;
    //    //�ͷ�ͷ���
    //    free(node);
    //    //�����ʱͷָ��ָ��գ��Ǿ�˵�����п��ˣ���Ϊָ��Ҳָ���
    //    if (q->_head == NULL) {
    //        q->_tail = NULL;
    //    }
    //}
    //// ��ȡ����ͷ��Ԫ�� 
    //QueueType QueueFront(QHead * q) {
    //    //�˴������������Ϸ��Լ��飬��Ϊ�������κ�ֵ��Ϊ�����ķ���ֵ
    //    return q->_head->_date;
    //}
    //// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
    //int QueueEmpty(QHead * q) {
    //    //�����Ϸ��Լ��飬������Ϸ�ֱ�ӷ��ز�Ϊ0����
    //    if (q == NULL || q->_head == NULL) {
    //        return 1;
    //    }
    //    return 0;
    //}

    ////��ȡ�����������
    //int deep(struct TreeNode* root) {
    //    if (root == NULL) {
    //        return 0;
    //    }
    //    int Dleft = deep(root->left);
    //    int Dright = deep(root->right);
    //    return Dleft > Dright ? Dleft + 1 : Dright + 1;
    //}
    ////��ȡĳһ��ȵĽ�����
    //int getSize(struct TreeNode* root, int level) {
    //    if (root == NULL) {
    //        return 0;
    //    }
    //    if (level == 1) {
    //        return 1;
    //    }
    //    return getSize(root->left, level - 1) + getSize(root->right, level - 1);
    //}
    //int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    //    if (root == NULL) {
    //        *returnSize = 0;
    //        *returnColumnSizes = NULL;
    //        return NULL;
    //    }
    //    QHead qh;
    //    QueueInit(&qh);
    //    QueuePush(&qh, root);
    //    int level = deep(root);
    //    int* column = (int*)malloc(sizeof(int) * level);
    //    int** ret = (int**)malloc(sizeof(int*) * level);
    //    int levelnow = 1;
    //    while (levelnow <= level && !QueueEmpty(&qh)) {
    //        int sz = getSize(root, levelnow);
    //        ret[levelnow - 1] = (int*)malloc(sizeof(int) * sz);
    //        int idx = 0;
    //        while (idx < sz) {
    //            struct TreeNode* node = QueueFront(&qh);
    //            QueuePop(&qh);
    //            ret[levelnow - 1][idx] = node->val;
    //            if (node->left) {
    //                QueuePush(&qh, node->left);
    //            }
    //            if (node->right) {
    //                QueuePush(&qh, node->right);
    //            }
    //            idx++;
    //        }
    //        column[levelnow - 1] = sz;
    //        levelnow++;
    //    }
    //    *returnSize = level;
    //    *returnColumnSizes = column;
    //    return ret;
    //}
	return 0;
}