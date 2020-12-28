int main() {
    ////使用这种方式来重命名数据类型，这样可以很方便的修改后续数据的数据类型，相当于#define的作用
    //typedef int StackType;
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
    //// 获取栈中有效元素个数
    //int StackSize(Stack * s1);
    //// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0
    //int StackEmpty(Stack * s1);
    ////栈销毁
    //void StackDestroy(Stack * s1);
    ////###########################################################################################
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


    //// 获取栈中有效元素个数
    //int StackSize(Stack * s1) {
    //    //参数合法性检验
    //    if (s1 == NULL) {
    //        return 0;
    //    }
    //    return s1->_size;
    //}


    //// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0
    //int StackEmpty(Stack * s1) {
    //    //参数合法性检验
    //    if (s1 == NULL || s1->_size == 0) {
    //        return 1;
    //    }
    //    return 0;
    //}


    ////栈销毁
    //void StackDestroy(Stack * s1) {
    //    //参数合法性检验，如果动态开辟空间为空，则直接返回
    //    if (s1 == NULL || s1->_date == NULL) {
    //        return;
    //    }
    //    free(s1->_date);
    //    s1->_date = NULL;
    //}
    ////#######################################################################################
    ////#######################################################################################



    //typedef struct {
    //    Stack s1;//入队栈
    //    Stack s2;//出队栈
    //} MyQueue;


    ///** Initialize your data structure here. */


    //MyQueue* myQueueCreate() {
    //    MyQueue* pst = (MyQueue*)malloc(sizeof(MyQueue));
    //    StackInit(&pst->s1);
    //    StackInit(&pst->s2);
    //    return pst;
    //}


    ///** Push element x to the back of queue. */
    //void myQueuePush(MyQueue * obj, int x) {
    //    StackPush(&obj->s1, x);
    //}


    ///** Removes the element from in front of queue and returns that element. */
    //int myQueuePop(MyQueue * obj) {
    //    if (!StackEmpty(&obj->s2)) {
    //        StackType ret = StackTop(&obj->s2);
    //        StackPop(&obj->s2);
    //        return ret;
    //    }
    //    else {
    //        while (StackSize(&obj->s1) != 1) {
    //            StackType val = StackTop(&obj->s1);
    //            StackPop(&obj->s1);
    //            StackPush(&obj->s2, val);
    //        }
    //        StackType val2 = StackTop(&obj->s1);
    //        StackPop(&obj->s1);
    //        return val2;
    //    }
    //}


    ///** Get the front element. */
    //int myQueuePeek(MyQueue * obj) {
    //    if (!StackEmpty(&obj->s2)) {
    //        StackType ret = StackTop(&obj->s2);
    //        return ret;
    //    }
    //    else {
    //        while (!StackEmpty(&obj->s1)) {
    //            StackType val = StackTop(&obj->s1);
    //            StackPop(&obj->s1);
    //            StackPush(&obj->s2, val);
    //        }
    //        StackType val2 = StackTop(&obj->s2);
    //        return val2;
    //    }
    //}


    ///** Returns whether the queue is empty. */
    //bool myQueueEmpty(MyQueue * obj) {
    //    if (StackEmpty(&obj->s1) && StackEmpty(&obj->s2)) {
    //        return true;
    //    }
    //    return false;
    //}


    //void myQueueFree(MyQueue * obj) {
    //    free(obj->s1._date);
    //    free(obj->s2._date);
    //}

	return 0;
}