int main() {
    ////ʹ�����ַ�ʽ���������������ͣ��������Ժܷ�����޸ĺ������ݵ��������ͣ��൱��#define������
    //typedef int StackType;
    ////����ջ
    //typedef struct Stack {
    //    //ʹ��ָ��ָ��һ�鶯̬���ٵ��ڴ�
    //    StackType* _date;
    //    //��ʾջ�е���Ч���ݣ�Ҳ������ջ��
    //    size_t _size;
    //    //��ʾջ���������
    //    size_t _capacity;
    //}Stack;


    ////�������к���������
    ////ջ��ʼ��
    //void StackInit(Stack * s1);
    ////���ջ�Ƿ�����
    //void CheckCapacity(Stack * s1);
    ////��ջ
    //void StackPush(Stack * s1, StackType val);
    ////��ջ 
    //void StackPop(Stack * s1);
    //// ��ȡջ��Ԫ��
    //StackType StackTop(Stack * s1);
    //// ��ȡջ����ЧԪ�ظ���
    //int StackSize(Stack * s1);
    //// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0
    //int StackEmpty(Stack * s1);
    ////ջ����
    //void StackDestroy(Stack * s1);
    ////###########################################################################################
    ////ջ��ʼ��
    //void StackInit(Stack * s1) {
    //    //�����Ϸ��Լ���
    //    if (s1 == NULL) {
    //        return;
    //    }
    //    s1->_date = NULL;
    //    s1->_capacity = s1->_size = 0;
    //}


    ////���ջ�Ƿ�����
    //void CheckCapacity(Stack * s1) {
    //    //�ú����������������ڲ������õģ����ԾͲ��ò����Ϸ��Լ����ˣ���Ϊǰ���Ѿ�������
    //    //�����Ч���ݵ��������������ô��Ҫ����
    //    if (s1->_capacity == s1->_size) {
    //        //ÿ����2���Ŀռ��������
    //        s1->_capacity = s1->_capacity == 0 ? 1 : 2 * s1->_capacity;
    //        //��realloc�������ж�̬����
    //        s1->_date = (StackType*)realloc(s1->_date, sizeof(StackType) * s1->_capacity);
    //    }
    //}


    ////��ջ
    //void StackPush(Stack * s1, StackType val) {
    //    //�����Ϸ��Լ���
    //    if (s1 == NULL) {
    //        return;
    //    }
    //    //��������Ƿ񹻣������Ļ�������
    //    CheckCapacity(s1);
    //    s1->_date[s1->_size] = val;
    //    s1->_size++;
    //}


    ////��ջ 
    //void StackPop(Stack * s1) {
    //    //�����Ϸ��Լ���,���û�����ݾ�ֱ�ӷ���
    //    if (s1 == NULL || s1->_size == 0) {
    //        return;
    //    }
    //    //����˳������Բ���������һ����ɾ��һ�����ݾ�Ҫ�ͷ�һ���ռ䣬ֻ����Ч���ݸ�����һ����
    //    s1->_size--;
    //}


    //// ��ȡջ��Ԫ��
    //StackType StackTop(Stack * s1) {
    //    //�����Ϸ��Լ��鲻��������Ϊ�������κ�ֵ��Ϊ����ķ���ֵ���Ժ�ѧ���׳��쳣�Ϳɽ��
    //    return s1->_date[s1->_size - 1];
    //}


    //// ��ȡջ����ЧԪ�ظ���
    //int StackSize(Stack * s1) {
    //    //�����Ϸ��Լ���
    //    if (s1 == NULL) {
    //        return 0;
    //    }
    //    return s1->_size;
    //}


    //// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0
    //int StackEmpty(Stack * s1) {
    //    //�����Ϸ��Լ���
    //    if (s1 == NULL || s1->_size == 0) {
    //        return 1;
    //    }
    //    return 0;
    //}


    ////ջ����
    //void StackDestroy(Stack * s1) {
    //    //�����Ϸ��Լ��飬�����̬���ٿռ�Ϊ�գ���ֱ�ӷ���
    //    if (s1 == NULL || s1->_date == NULL) {
    //        return;
    //    }
    //    free(s1->_date);
    //    s1->_date = NULL;
    //}
    ////#######################################################################################
    ////#######################################################################################



    //typedef struct {
    //    Stack s1;//���ջ
    //    Stack s2;//����ջ
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