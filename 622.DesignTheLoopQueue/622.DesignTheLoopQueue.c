int main() {
    ////使用数组创建循环队列########################################################
    //typedef struct {
    //    int _front;
    //    int _rear;
    //    int* _date;
    //    int _k;
    //} MyCircularQueue;


    //MyCircularQueue* myCircularQueueCreate(int k) {
    //    MyCircularQueue* mq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    //    mq->_date = (int*)malloc(sizeof(int) * (k + 1));
    //    mq->_k = k + 1;
    //    mq->_front = mq->_rear = 0;
    //    return mq;
    //}

    //bool myCircularQueueEnQueue(MyCircularQueue * obj, int value) {
    //    if ((obj->_rear + 1) % obj->_k == obj->_front) {
    //        return false;
    //    }
    //    obj->_date[obj->_rear] = value;
    //    obj->_rear = (obj->_rear + 1) % obj->_k;
    //    return true;
    //}

    //bool myCircularQueueDeQueue(MyCircularQueue * obj) {
    //    if (obj->_front == obj->_rear) {
    //        return false;
    //    }
    //    obj->_front = (obj->_front + 1) % obj->_k;
    //    return true;
    //}

    //int myCircularQueueFront(MyCircularQueue * obj) {
    //    if (obj->_front == obj->_rear) {
    //        return -1;
    //    }
    //    return obj->_date[obj->_front];
    //}

    //int myCircularQueueRear(MyCircularQueue * obj) {
    //    if (obj->_front == obj->_rear) {
    //        return -1;
    //    }
    //    if (obj->_rear == 0) {
    //        return obj->_date[obj->_k - 1];
    //    }
    //    return obj->_date[obj->_rear - 1];
    //}

    //bool myCircularQueueIsEmpty(MyCircularQueue * obj) {
    //    if (obj->_front == obj->_rear) {
    //        return true;
    //    }
    //    return false;
    //}

    //bool myCircularQueueIsFull(MyCircularQueue * obj) {
    //    if ((obj->_rear + 1) % obj->_k == obj->_front) {
    //        return true;
    //    }
    //    return false;
    //}

    //void myCircularQueueFree(MyCircularQueue * obj) {
    //    free(obj->_date);
    //    free(obj);
    //}




    ////使用链表创建循环队列#########################################################
    //typedef struct MyQueue {
    //    int _date;
    //    struct MYQueue* _next;
    //}MyQueue;

    //typedef struct {
    //    MyQueue* _front;
    //    MyQueue* _rear;
    //    int _size;
    //    int _capacity;
    //} MyCircularQueue;

    //MyQueue* myQueueCreate(int value) {
    //    MyQueue* mq = (MyQueue*)malloc(sizeof(MyQueue));
    //    mq->_date = value;
    //    mq->_next = NULL;
    //    return mq;
    //}

    //MyCircularQueue* myCircularQueueCreate(int k) {
    //    MyCircularQueue* mq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    //    mq->_front = mq->_rear = NULL;
    //    mq->_size = 0;
    //    mq->_capacity = k;
    //    return mq;
    //}

    //bool myCircularQueueEnQueue(MyCircularQueue * obj, int value) {
    //    if (obj->_capacity == obj->_size) {
    //        return false;
    //    }
    //    if (obj->_size == 0) {
    //        obj->_front = obj->_rear = myQueueCreate(value);
    //        obj->_size++;
    //    }
    //    else {
    //        obj->_rear->_next = myQueueCreate(value);
    //        obj->_rear = obj->_rear->_next;
    //        obj->_size++;
    //    }
    //    return true;
    //}

    //bool myCircularQueueDeQueue(MyCircularQueue * obj) {
    //    if (obj->_size == 0) {
    //        return false;
    //    }
    //    if (obj->_size == 1) {
    //        free(obj->_front);
    //        obj->_front = obj->_rear = NULL;
    //        obj->_size = 0;
    //    }
    //    else {
    //        MyQueue* node = obj->_front;
    //        obj->_front = node->_next;
    //        free(node);
    //        obj->_size--;
    //    }
    //    return true;
    //}

    //int myCircularQueueFront(MyCircularQueue * obj) {
    //    if (obj->_size == 0) {
    //        return -1;
    //    }
    //    return obj->_front->_date;
    //}

    //int myCircularQueueRear(MyCircularQueue * obj) {
    //    if (obj->_size == 0) {
    //        return -1;
    //    }
    //    return obj->_rear->_date;
    //}

    //bool myCircularQueueIsEmpty(MyCircularQueue * obj) {
    //    if (obj->_size == 0) {
    //        return true;
    //    }
    //    return false;
    //}

    //bool myCircularQueueIsFull(MyCircularQueue * obj) {
    //    if (obj->_size == obj->_capacity) {
    //        return true;
    //    }
    //    return false;
    //}

    //void myCircularQueueFree(MyCircularQueue * obj) {
    //    while (obj->_size) {
    //        MyQueue* node = obj->_front;
    //        obj->_front = node->_next;
    //        free(node);
    //        obj->_size--;
    //    }
    //    obj->_rear = obj->_front = NULL;
    //    free(obj);
    //}
	return 0;
}