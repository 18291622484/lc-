int main() {
    /*int compress(char* chars, int charsSize) {
        int idx = 0;
        int num = 1;
        int i = 0;
        while (i < charsSize) {
            if (i < charsSize - 1 && chars[i] == chars[i + 1]) {
                num++;
            }
            else if (num > 1) {
                chars[idx++] = chars[i];
                int begin = idx;
                while (num) {
                    chars[idx++] = num % 10 + '0';
                    num /= 10;
                }
                int end = idx - 1;
                while (begin < end) {
                    char ch = chars[begin];
                    chars[begin++] = chars[end];
                    chars[end--] = ch;
                }
                num = 1;
            }
            else {
                chars[idx] = chars[i];
                idx++;
            }
            i++;
        }
        return idx;
    }*/
	return 0;
}