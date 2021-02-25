int main() {
    /*int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
        int* arr = (int*)malloc(sizeof(int) * 2);
        arr[0] = arr[1] = -1;
        *returnSize = 2;
        int begin = 0;
        int end = numsSize - 1;
        while (begin <= end) {
            int mid = (begin + end) / 2;
            if (nums[mid] == target) {
                arr[0] = arr[1] = mid;
                break;
            }
            else if (nums[mid] > target)
                end = mid - 1;
            else
                begin = mid + 1;
        }
        if (arr[0] == -1)
            return arr;
        while (arr[0] >= 0 && nums[arr[0]] == target) {
            arr[0]--;
        }
        while (arr[1] < numsSize && nums[arr[1]] == target) {
            arr[1]++;
        }
        arr[0]++;
        arr[1]--;
        return arr;
    }*/
	return 0;
}