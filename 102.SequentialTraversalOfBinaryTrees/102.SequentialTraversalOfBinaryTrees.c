int main() {
    ////使用这种方式来重命名数据类型，这样可以很方便的修改后续数据的数据类型，相当于#define的作用
    //typedef struct TreeNode* QueueType;
    ////创建队列
    //typedef struct Queue {
    //    //队列保存的数据
    //    QueueType _date;
    //    //指向下一个结点的指针
    //    struct Queue* _next;
    //}Queue;
    ////创建头结点
    //typedef struct QueueHead {
    //    //头结点中存放两个指针
    //    //指向首节点的指针
    //    Queue* _head;
    //    //指向尾结点的指针
    //    Queue* _tail;
    //}QHead;
    ////包含所有函数的声明
    //// 初始化队列 
    //void QueueInit(QHead * q);
    ////创建结点
    //Queue* QueueCenter(QueueType val);
    //// 队尾入队列 
    //void QueuePush(QHead * q, QueueType val);
    //// 队头出队列 
    //void QueuePop(QHead * q);
    //// 获取队列头部元素 
    //QueueType QueueFront(QHead * q);
    //// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
    //int QueueEmpty(QHead * q);

    //// 初始化队列 
    //void QueueInit(QHead * q) {
    //    //参数合法性检验
    //    if (q == NULL) {
    //        return;
    //    }
    //    //初始化结点
    //    q->_head = q->_tail = NULL;
    //}
    ////创建结点
    //Queue* QueueCenter(QueueType val) {
    //    Queue* newNode = (Queue*)malloc(sizeof(Queue));
    //    newNode->_date = val;
    //    newNode->_next = NULL;
    //    return newNode;
    //}
    //// 队尾入队列 
    //void QueuePush(QHead * q, QueueType val) {
    //    //参数合法性检验
    //    if (q == NULL) {
    //        return;
    //    }
    //    //分两种情况插入
    //    //如果一个元素都没有，那么就让头指针和尾指针指向插入的节点
    //    if (q->_head == NULL) {
    //        q->_head = q->_tail = QueueCenter(val);
    //        return;
    //    }
    //    //如果有元素，那么就在尾结点后面插入一个元素，并修改尾指针指向
    //    q->_tail->_next = QueueCenter(val);
    //    q->_tail = q->_tail->_next;
    //}
    //// 队头出队列 
    //void QueuePop(QHead * q) {
    //    //参数合法性检验
    //    if (q == NULL) {
    //        return;
    //    }
    //    //保留头结点
    //    Queue* node = q->_head;
    //    //修改头结点指向
    //    q->_head = node->_next;
    //    //释放头结点
    //    free(node);
    //    //如果此时头指针指向空，那就说明队列空了，让为指针也指向空
    //    if (q->_head == NULL) {
    //        q->_tail = NULL;
    //    }
    //}
    //// 获取队列头部元素 
    //QueueType QueueFront(QHead * q) {
    //    //此处不好做参数合法性检验，因为不能以任何值作为出错后的返回值
    //    return q->_head->_date;
    //}
    //// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
    //int QueueEmpty(QHead * q) {
    //    //参数合法性检验，如果不合法直接返回不为0的数
    //    if (q == NULL || q->_head == NULL) {
    //        return 1;
    //    }
    //    return 0;
    //}

    ////获取二叉树的深度
    //int deep(struct TreeNode* root) {
    //    if (root == NULL) {
    //        return 0;
    //    }
    //    int Dleft = deep(root->left);
    //    int Dright = deep(root->right);
    //    return Dleft > Dright ? Dleft + 1 : Dright + 1;
    //}
    ////获取某一深度的结点个数
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