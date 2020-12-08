#include<stdio.h>
#include<stdlib.h>

void swap(int* nums, int start, int end) {
    for (; start < end; start++, end--) {
        int temp = 0;
        temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
    }
}
void removeDuplicates(int* nums, int numsSize, int k) {
    swap(nums, 0, numsSize - k - 1);
    swap(nums, numsSize - k, numsSize - 1);
    swap(nums, 0, numsSize - 1);
}

int main() {
    int num[] = { 1,2,3,4,5,6,7 };
    int k = 3;
    removeDuplicates(num, sizeof(num) / sizeof(num[0]), k);
    for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
        printf("%d\n", num[i]);
    }
	return 0;
}