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

    ////###########################################################################################
    ////###########################################################################################



    ////ʹ��ջ����������ͼ�������õĺ���
    //char ret(char c) {
    //    if (c == ')') {
    //        return '(';
    //    }
    //    if (c == '}') {
    //        return '{';
    //    }
    //    if (c == ']') {
    //        return '[';
    //    }
    //    return 0;
    //}

    //bool isValid(char* s) {
    //    if (!strlen(s)) {
    //        return true;
    //    }
    //    if (strlen(s) % 2 == 1) {
    //        return false;
    //    }


    //    ʹ��ջ����������ͼ
    //        Stack s1;
    //    StackInit(&s1);
    //    while (*s) {
    //        if (*s == '(' || *s == '{' || *s == '[') {
    //            StackPush(&s1, *s);
    //            s++;
    //        }
    //        else {
    //            if (StackSize(&s1) == 0) {
    //                return false;
    //            }
    //            if (StackTop(&s1) == ret(*s)) {
    //                StackPop(&s1);
    //                s++;
    //            }
    //            else {
    //                return false;
    //            }
    //        }
    //    }
    //    return StackSize(&s1) == 0;



    //    //ʹ��ջ��������ͼ
    //    Stack s1;
    //    StackInit(&s1);
    //    static char map[][2] = { {'(' , ')'} , {'{' , '}'} , {'[' , ']'} };
    //    while (*s) {
    //        if (*s == '(' || *s == '{' || *s == '[') {
    //            StackPush(&s1, *s);
    //            s++;
    //        }
    //        else {
    //            if (StackSize(&s1) == 0) {
    //                return false;
    //            }
    //            for (int i = 0; i < 3; i++) {
    //                if (*s == map[i][1]) {
    //                    if (StackTop(&s1) == map[i][0]) {
    //                        StackPop(&s1);
    //                        s++;
    //                        break;
    //                    }
    //                    else {
    //                        return false;
    //                    }
    //                }
    //            }
    //        }
    //    }
    //    return StackSize(&s1) == 0;
    //}
	return 0;
}