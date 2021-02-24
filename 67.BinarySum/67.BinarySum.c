int main() {
    //void reverse_string(char* str) {
    //    if (strlen(str) < 2) {
    //        return;
    //    }
    //    else {
    //        char ch = *str;
    //        int len = strlen(str) - 1;
    //        *str = *(str + len);
    //        *(str + len) = '\0';
    //        reverse_string(str + 1);
    //        *(str + len) = ch;
    //        return;
    //    }
    //}
    //char* addBinary(char* a, char* b) {
    //    int m = strlen(a);
    //    int n = strlen(b);
    //    int r = m > n ? m + 2 : n + 2;
    //    char* ret = (char*)malloc(r);
    //    *(ret + r - 1) = '\0';
    //    *(ret + r - 2) = '\0';
    //    int count = 0;
    //    int num = 0;
    //    while (m - 1 >= 0 || n - 1 >= 0) {
    //        if (--m >= 0)
    //            num += *(a + m) - '0';
    //        if (--n >= 0)
    //            num += *(b + n) - '0';
    //        if (num < 2) {
    //            ret[count++] = num + '0';
    //            num = 0;
    //        }
    //        else if (num == 2) {
    //            ret[count++] = '0';
    //            num = 1;
    //        }
    //        else {
    //            ret[count++] = '1';
    //            num = 1;
    //        }
    //    }
    //    if (num == 1) {
    //        ret[count] = '1';
    //    }
    //    reverse_string(ret);
    //    return ret;
    //}
	return 0;
}