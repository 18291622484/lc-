int main() {
    ////方法一
    //void swap(int* nums, int start, int end) {
    //    for (; start < end; start++, end--) {
    //        int temp = 0;
    //        temp = nums[start];
    //        nums[start] = nums[end];
    //        nums[end] = temp;
    //    }
    //}
    //void rotate(int* nums, int numsSize, int k) {
    //    k %= numsSize;
    //    swap(nums, 0, numsSize - k - 1);
    //    swap(nums, numsSize - k, numsSize - 1);
    //    swap(nums, 0, numsSize - 1);
    //}
    ////方法二
    //void rotate(int* nums, int numsSize, int k) {
    //    int* arr = (int*)malloc(sizeof(int) * numsSize * 2);
    //    memcpy(arr, nums, sizeof(int) * numsSize);
    //    memcpy(arr + numsSize, nums, sizeof(int) * numsSize);
    //    k %= numsSize;
    //    int count = numsSize - k;
    //    for (int i = 0; i < numsSize; i++) {
    //        nums[i] = arr[count + i];
    //    }
    //}
	return 0;
}