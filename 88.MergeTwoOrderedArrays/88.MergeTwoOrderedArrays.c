#include<stdio.h>
#include<stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int count = m + n - 1;
    m--, n--;
    while (m >= 0 && n >= 0) {
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
    while (n >= 0) {
        nums1[count] = nums2[n];
        count--;
        n--;
    }
}

int main() {
    int num1[] = { 6,8,9,10,11,15,0,0,0,0,0 };
    int num2[] = { 3,4,6,7,9 };
    merge(num1, sizeof(num1) / sizeof(num1[0]), 6, num2, sizeof(num2) / sizeof(num2[0]), 5);
    for (int i = 0; i < sizeof(num1) / sizeof(num1[0]); i++) {
        printf("%d\n", num1[i]);
    }
	return 0;
}