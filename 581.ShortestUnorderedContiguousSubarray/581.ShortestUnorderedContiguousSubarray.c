int main() {
    //int findUnsortedSubarray(int* nums, int numsSize) {
    //    int begin = 0;
    //    int end = numsSize - 1;
    //    int flag = 0;
    //    while (begin < end) {
    //        if (nums[begin] < nums[begin + 1])
    //            flag = ++begin;
    //        else if (nums[begin] == nums[begin + 1])
    //            ++begin;
    //        else {
    //            begin = flag;
    //            flag = end;
    //            break;
    //        }
    //    }
    //    while (begin < end) {
    //        if (nums[end] > nums[end - 1])
    //            flag = --end;
    //        else if (nums[end] == nums[end - 1])
    //            --end;
    //        else {
    //            end = flag;
    //            break;
    //        }
    //    }
    //    if (begin >= end)
    //        return 0;
    //    int max = begin;
    //    int min = begin;
    //    for (int i = begin; i <= end; i++) {
    //        if (nums[i] < nums[min])
    //            min = i;
    //        if (nums[i] > nums[max])
    //            max = i;
    //    }
    //    while (--begin >= 0 && nums[begin] > nums[min]) {}
    //    while (++end <= numsSize - 1 && nums[end] < nums[max]) {}
    //    return end - begin - 1;
    //}
	return 0;
}