#include<stdio.h>
#include<stdlib.h>

int* singleNumbers(int* nums, int numsSize, int* returnSize) {
	int* singlearr = (int*)calloc(2, sizeof(int)); 
	if (singlearr == NULL)
		return NULL;
	*returnSize = 2;
	int sum = 0, count = 1;
	for (int i = 0; i < numsSize; i++) {
		sum ^= nums[i];
	}
	while ((sum & 1) == 0) {
		sum >>= 1;
		count *= 2;
	}
	for (int i = 0; i < numsSize; i++) {
		if ((nums[i] & count) == 0) {
			singlearr[0] ^= nums[i];
		}
		else {
			singlearr[1] ^= nums[i];
		}
	}
	return singlearr;
}

int main() {
	int arr[] = { 1,2,10,4,1,5,7,5,8,7,8,4,3,3 };
	int ret = 0;
	int* retarr = singleNumbers(arr, sizeof(arr) / sizeof(arr[0]), &ret);
	for (int i = 0; i < 2; i++) {
		printf("%d\n", retarr[i]);
	}
	return 0;
}