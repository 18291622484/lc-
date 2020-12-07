#include<stdio.h>
#include<stdlib.h>

//时间复杂度：O(n)
int missingNumber1(int* nums, int numsSize) {
	int* arr = (int*)calloc(numsSize + 1, sizeof(int));
	if (arr == NULL)
		return NULL;
	for (int i = 0; i < numsSize; i++) {
		arr[nums[i]] = 1;
	}
	for (int i = 0; i < numsSize + 1; i++) {
		if (arr[i] == 0)
			return i;
	}
}

//时间复杂度：O(n)
int missingNumber2(int* nums, int numsSize) {
	int sum = 0, sum1 = 0;
	for (int i = 0; i < numsSize; i++) {
		sum += nums[i];
		sum1 += i;
	}
	sum1 += numsSize;
	return sum1 - sum;
}
 
int main() {
	int arr[] = { 8,6,4,2,3,5,9,0,1 };
	printf("%d\n", missingNumber1(arr, sizeof(arr) / sizeof(arr[0])));
	printf("%d\n", missingNumber2(arr, sizeof(arr) / sizeof(arr[0])));
	return 0;
}