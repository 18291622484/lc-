int main() {
	////ʹ�����ַ�ʽ���������������ͣ��������Ժܷ�����޸ĺ������ݵ��������ͣ��൱��#define������
	//typedef int QueueType;

	////��������
	//typedef struct Queue {
	//	//���б��������
	//	QueueType _date;
	//	//ָ����һ������ָ��
	//	struct Queue* _next;
	//}Queue;

	////����ͷ���
	//typedef struct QHead {
	//	//ͷ����д������ָ��
	//	//ָ���׽ڵ��ָ��
	//	Queue* _head;
	//	//ָ��β����ָ��
	//	Queue* _tail;
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
	//// ��ȡ���ж�βԪ�� 
	//QueueType QueueBack(QHead * q);
	//// ��ȡ��������ЧԪ�ظ��� 
	//int QueueSize(QHead * q);
	//// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
	//int QueueEmpty(QHead * q);
	//// ���ٶ��� 
	//void QueueDestroy(QHead * q);
	////#########################################################################################
	//// ��ʼ������ 
	//void QueueInit(QHead * q) {
	//	//�����Ϸ��Լ���
	//	if (q == NULL) {
	//		return;
	//	}
	//	//��ʼ�����
	//	q->_head = q->_tail = NULL;
	//}

	////�������
	//Queue* QueueCenter(QueueType val) {
	//	Queue* newNode = (Queue*)malloc(sizeof(Queue));
	//	newNode->_date = val;
	//	newNode->_next = NULL;
	//	return newNode;
	//}

	//// ��β����� 
	//void QueuePush(QHead * q, QueueType val) {
	//	//�����Ϸ��Լ���
	//	if (q == NULL) {
	//		return;
	//	}
	//	//�������������
	//	//���һ��Ԫ�ض�û�У���ô����ͷָ���βָ��ָ�����Ľڵ�
	//	if (q->_head == NULL) {
	//		q->_head = q->_tail = QueueCenter(val);
	//		return;
	//	}
	//	//�����Ԫ�أ���ô����β���������һ��Ԫ�أ����޸�βָ��ָ��
	//	q->_tail->_next = QueueCenter(val);
	//	q->_tail = q->_tail->_next;
	//}

	//// ��ͷ������ 
	//void QueuePop(QHead * q) {
	//	//�����Ϸ��Լ���
	//	if (q == NULL) {
	//		return;
	//	}
	//	//����ͷ���
	//	Queue* node = q->_head;
	//	//�޸�ͷ���ָ��
	//	q->_head = node->_next;
	//	//�ͷ�ͷ���
	//	free(node);
	//	//�����ʱͷָ��ָ��գ��Ǿ�˵�����п��ˣ���Ϊָ��Ҳָ���
	//	if (q->_head == NULL) {
	//		q->_tail = NULL;
	//	}
	//}

	//// ��ȡ����ͷ��Ԫ�� 
	//QueueType QueueFront(QHead * q) {
	//	//�˴������������Ϸ��Լ��飬��Ϊ�������κ�ֵ��Ϊ�����ķ���ֵ
	//	return q->_head->_date;
	//}

	//// ��ȡ���ж�βԪ�� 
	//QueueType QueueBack(QHead * q) {
	//	//�˴������������Ϸ��Լ��飬��Ϊ�������κ�ֵ��Ϊ�����ķ���ֵ
	//	return q->_tail->_date;
	//}

	//// ��ȡ��������ЧԪ�ظ��� 
	//int QueueSize(QHead * q) {
	//	//�����Ϸ��Լ���
	//	if (q == NULL) {
	//		return 0;
	//	}
	//	//�Ӷ�ͷ��㿪ʼ�����������Ϊ�գ���������һ������ָ��
	//	Queue* node = q->_head;
	//	int count = 0;
	//	while (node) {
	//		count++;
	//		node = node->_next;
	//	}
	//	return count;
	//}

	//// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
	//int QueueEmpty(QHead * q) {
	//	//�����Ϸ��Լ��飬������Ϸ�ֱ�ӷ��ز�Ϊ0����
	//	if (q == NULL || q->_head == NULL) {
	//		return 1;
	//	}
	//	return 0;
	//}

	//// ���ٶ��� 
	//void QueueDestroy(QHead * q) {
	//	//�����Ϸ��Լ���
	//	if (q == NULL) {
	//		return;
	//	}
	//	//ѭ���ͷſռ�
	//	Queue* node = q->_head;
	//	q->_head = q->_tail = NULL;
	//	while (node) {
	//		Queue* temp = node;
	//		node = node->_next;
	//		free(temp);
	//	}
	//}
	////##########################################################################################
	////##########################################################################################


	//typedef struct {
	//	QHead q;
	//} MyStack;

	///** Initialize your data structure here. */

	//MyStack* myStackCreate() {
	//	MyStack* s = (MyStack*)malloc(sizeof(MyStack));
	//	QueueInit(&s->q);
	//	return s;
	//}

	///** Push element x onto stack. */
	//void myStackPush(MyStack * obj, int x) {
	//	QueuePush(&obj->q, x);
	//}

	///** Removes the element on top of the stack and returns that element. */
	//int myStackPop(MyStack * obj) {
	//	int count = QueueSize(&obj->q);
	//	while (count != 1) {
	//		QueueType val = QueueFront(&obj->q);
	//		QueuePop(&obj->q);
	//		QueuePush(&obj->q, val);
	//		count--;
	//	}
	//	QueueType ret = QueueFront(&obj->q);
	//	QueuePop(&obj->q);
	//	return ret;
	//}

	///** Get the top element. */
	//int myStackTop(MyStack * obj) {
	//	int count = QueueSize(&obj->q);
	//	QueueType val = 0;
	//	while (count) {
	//		val = QueueFront(&obj->q);
	//		QueuePop(&obj->q);
	//		QueuePush(&obj->q, val);
	//		count--;
	//	}
	//	return val;
	//}

	///** Returns whether the stack is empty. */
	//bool myStackEmpty(MyStack * obj) {
	//	if (QueueEmpty(&obj->q)) {
	//		return true;
	//	}
	//	return false;
	//}

	//void myStackFree(MyStack * obj) {
	//	Queue* node = obj->q._head;
	//	obj->q._head = obj->q._tail = NULL;
	//	while (node) {
	//		Queue* temp = node;
	//		node = node->_next;
	//		free(temp);
	//	}
	//}

	return 0;
}