#include<stdio.h>
#include<stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    if (nums == NULL) {
        return nums;
    }
    int idx = 1;
    int flag = nums[0];
    int count = 1;
    for (int i = 1; i < numsSize; i++) {
        if (flag != nums[i]) {
            nums[idx++] = nums[i];
            flag = nums[i];
            count++;
        }
    }
    return count;
}

int main() {
    int num[] = { 1,2,2,3,6,8,8,9 };
    int ret = removeDuplicates(num, sizeof(num) / sizeof(num[0]));
    for (int i = 0; i < ret; i++) {
        printf("%d\n", num[i]);
    }
	return 0;
}