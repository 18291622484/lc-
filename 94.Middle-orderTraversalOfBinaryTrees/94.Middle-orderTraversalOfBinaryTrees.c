int main() {
    ////ʹ�����ַ�ʽ���������������ͣ��������Ժܷ�����޸ĺ������ݵ��������ͣ��൱��#define������
    //typedef struct TreeNode* StackType;
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
    //// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0
    //int StackEmpty(Stack * s1);
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
    //// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0
    //int StackEmpty(Stack * s1) {
    //    //�����Ϸ��Լ���
    //    if (s1 == NULL || s1->_size == 0) {
    //        return 1;
    //    }
    //    return 0;
    //}
    ////��ȡ����������������ȷ����̬���ٵ������С
    //int getSize(struct TreeNode* root) {
    //    if (root == NULL) {
    //        return 0;
    //    }
    //    return getSize(root->left) + getSize(root->right) + 1;
    //}
    ////��������������������У����ҽ������е� returnSize ��ֵΪ�����С
    //int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    //    //�����Ϸ��Լ���
    //    if (root == NULL) {
    //        *returnSize = 0;
    //        return NULL;
    //    }
    //    //����ջ
    //    Stack s;
    //    StackInit(&s);
    //    //��ȡ��������С
    //    int sz = getSize(root);
    //    //��̬�������飬����������
    //    int* ret = (int*)malloc(sizeof(int) * sz);
    //    int i = 0;
    //    //��ʼѭ������
    //    while (root || !StackEmpty(&s)) {
    //        //ֻҪ��������������ô�ͽ��䱣����ջ��
    //        while (root) {
    //            StackPush(&s, root);
    //            root = root->left;
    //        }
    //        //ֱ��������Ϊ�գ���ô��ȡջ������ջ��Ԫ�ش������鲢��ʼ����ջ���ڵ��������
    //        root = StackTop(&s);
    //        StackPop(&s);
    //        ret[i++] = root->val;
    //        root = root->right;
    //    }
    //    //���������ֵ
    //    *returnSize = sz;
    //    return ret;
    //}
	return 0;
}