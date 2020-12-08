#include<stdio.h>
#include<stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int count = m + n - 1;
    m--, n--;
    while (m >= 0 || n >= 0) {
        if (nums1[m] < nums2[n]) {
            nums1[count] = nums2[n];
            count--;
            n--;
        }
        else {
            nums1[count] = nums1[m];
            count--;
            m--;
        }
    }
}

int main() {
    int num1[] = { 1,2,3,5,6,0,0,0 };
    int num2[] = { 4,6,9 };
    merge(num1, sizeof(num1) / sizeof(num1[0]), 5, num2, sizeof(num2) / sizeof(num2[0]), 3);
    for (int i = 0; i < sizeof(num1) / sizeof(num1[0]); i++) {
        printf("%d\n", num1[i]);
    }
	return 0;
}