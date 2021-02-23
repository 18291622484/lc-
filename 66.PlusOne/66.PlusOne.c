int main() {
    /*int* plusOne(int* digits, int digitsSize, int* returnSize) {
        int size = digitsSize--;
        int num = 1;
        while (digitsSize >= 0) {
            num += digits[digitsSize];
            if (num < 10) {
                digits[digitsSize--] = num;
                num = 0;
                break;
            }
            else {
                digits[digitsSize--] = num % 10;
                num /= 10;
            }
        }
        if (digitsSize < 0 && num) {
            int* ret = (int*)malloc(sizeof(int) * (size + 1));
            ret[0] = num;
            memcpy(ret + 1, digits, sizeof(int) * size);
            *returnSize = size + 1;
            return ret;
        }
        *returnSize = size;
        return digits;
    }*/
	return 0;
}