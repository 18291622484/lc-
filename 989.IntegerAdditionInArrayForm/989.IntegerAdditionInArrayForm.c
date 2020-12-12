#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int* addToArrayForm(int* A, int ASize, int K, int* returnSize) {
    if (K == 0) {
        *returnSize = ASize;
        return A;
    }
    int count = (log10(K) + 1) > ASize ? (log10(K) + 2) : ASize + 1;
    *returnSize = count;
    int* ret = (int*)calloc(count, sizeof(int));
    if (ret == NULL)
        return NULL;
    while (ASize >= 0) {
        if (--ASize >= 0)
            K = A[ASize] + K;
        ret[--count] = K % 10;
        K /= 10;
    }
    if (ret[0] == 0) {
        ret[--count] = K;
        (*returnSize)--;
        return ++ret;
    }
    else
        return ret;
}

int main() {
    int num[] = { 1,2,0,0 };
    int k = 9456;
    int size = 0;
    int* ret = addToArrayForm(num, sizeof(num) / sizeof(num[0]), k, &size);
    for (int i = 0; i < size; i++) {
        printf("%d", ret[i]);
    }
    printf("\n");
	return 0;
}