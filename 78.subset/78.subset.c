int main() {
    /*int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
        int count = 1;
        for (int i = 0; i < numsSize; i++)
            count *= 2;
        *returnSize = count;
        int** outside = (int**)malloc(sizeof(int*) * count);
        *returnColumnSizes = (int*)malloc(sizeof(int) * count);
        int* flag = (int*)malloc(sizeof(int) * numsSize);
        for (int i = 0; i < count; i++) {
            int num = 0;
            for (int j = 0; j < numsSize; j++) {
                if (i & (1 << j))
                    flag[num++] = nums[j];
            }
            (*returnColumnSizes)[i] = num;
            *(outside + i) = (int*)malloc(sizeof(int) * num);
            memcpy(*(outside + i), flag, sizeof(int) * num);
        }
        return outside;
    }*/
	return 0;
}