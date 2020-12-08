#include<stdio.h>
#include<stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int size = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[size] = nums[i];
            size++;
        }
    }
    return size;
}

int main() {
    int num[] = { 2,4,9,6,9,8,1 };
    int n = 9;
    int ret = removeElement(num, sizeof(num) / sizeof(num[0]), n);
    for (int i = 0; i < ret; i++) {
        printf("%d\n", num[i]);
    }
	return 0;
}