int main() {
    ////使用这种方式来重命名数据类型，这样可以很方便的修改后续数据的数据类型，相当于#define的作用
    //typedef struct TreeNode* StackType;
    ////创建栈
    //typedef struct Stack {
    //    //使用指针指向一块动态开辟的内存
    //    StackType* _date;
    //    //表示栈中的有效数据，也代表了栈顶
    //    size_t _size;
    //    //表示栈的最大容量
    //    size_t _capacity;
    //}Stack;
    ////包含所有函数的声明
    ////栈初始化
    //void StackInit(Stack * s1);
    ////检查栈是否已满
    //void CheckCapacity(Stack * s1);
    ////进栈
    //void StackPush(Stack * s1, StackType val);
    ////出栈 
    //void StackPop(Stack * s1);
    //// 获取栈顶元素
    //StackType StackTop(Stack * s1);
    //// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0
    //int StackEmpty(Stack * s1);
    ////栈初始化
    //void StackInit(Stack * s1) {
    //    //参数合法性检验
    //    if (s1 == NULL) {
    //        return;
    //    }
    //    s1->_date = NULL;
    //    s1->_capacity = s1->_size = 0;
    //}
    ////检查栈是否已满
    //void CheckCapacity(Stack * s1) {
    //    //该函数是在其他函数内部被调用的，所以就不用参数合法性检验了，因为前面已经检查过了
    //    //如果有效数据等于最大容量，那么需要增容
    //    if (s1->_capacity == s1->_size) {
    //        //每次以2倍的空间进行增容
    //        s1->_capacity = s1->_capacity == 0 ? 1 : 2 * s1->_capacity;
    //        //用realloc函数进行动态增容
    //        s1->_date = (StackType*)realloc(s1->_date, sizeof(StackType) * s1->_capacity);
    //    }
    //}
    ////进栈
    //void StackPush(Stack * s1, StackType val) {
    //    //参数合法性检验
    //    if (s1 == NULL) {
    //        return;
    //    }
    //    //检查容量是否够，不够的话就增容
    //    CheckCapacity(s1);
    //    s1->_date[s1->_size] = val;
    //    s1->_size++;
    //}
    ////出栈 
    //void StackPop(Stack * s1) {
    //    //参数合法性检验,如果没有数据就直接返回
    //    if (s1 == NULL || s1->_size == 0) {
    //        return;
    //    }
    //    //这是顺序表，所以不用像链表一样，删除一个数据就要释放一个空间，只需有效数据个数减一即可
    //    s1->_size--;
    //}
    //// 获取栈顶元素
    //StackType StackTop(Stack * s1) {
    //    //参数合法性检验不好做，因为不能以任何值作为出错的返回值，以后学了抛出异常就可解决
    //    return s1->_date[s1->_size - 1];
    //}
    //// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0
    //int StackEmpty(Stack * s1) {
    //    //参数合法性检验
    //    if (s1 == NULL || s1->_size == 0) {
    //        return 1;
    //    }
    //    return 0;
    //}
    ////获取二叉树结点个数，以确定动态开辟的数组大小
    //int getSize(struct TreeNode* root) {
    //    if (root == NULL) {
    //        return 0;
    //    }
    //    return getSize(root->left) + getSize(root->right) + 1;
    //}
    ////将遍历结果保存在数组中，并且将参数中的 returnSize 赋值为数组大小
    //int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    //    //参数合法性检验
    //    if (root == NULL) {
    //        *returnSize = 0;
    //        return NULL;
    //    }
    //    //创建栈
    //    Stack s;
    //    StackInit(&s);
    //    //获取二叉树大小
    //    int sz = getSize(root);
    //    //动态开辟数组，保存遍历结果
    //    int* ret = (int*)malloc(sizeof(int) * sz);
    //    int i = 0;
    //    //开始循环遍历
    //    while (root || !StackEmpty(&s)) {
    //        //只要存在左子树，那么就将其保存在栈中
    //        while (root) {
    //            StackPush(&s, root);
    //            root = root->left;
    //        }
    //        //直到左子树为空，那么就取栈顶，将栈顶元素存入数组并开始遍历栈顶节点的右子树
    //        root = StackTop(&s);
    //        StackPop(&s);
    //        ret[i++] = root->val;
    //        root = root->right;
    //    }
    //    //返回所需的值
    //    *returnSize = sz;
    //    return ret;
    //}
	return 0;
}