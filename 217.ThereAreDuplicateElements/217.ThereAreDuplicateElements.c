int main() {
    /*bool containsDuplicate(int* nums, int numsSize) {
        int group = numsSize;
        while (group > 1) {
            group = group / 3 + 1;
            for (int i = group; i < numsSize; i++) {
                int tmp = nums[i];
                int j = i - group;
                while (j >= 0 && tmp < nums[j]) {
                    nums[j + group] = nums[j];
                    j -= group;
                }
                nums[j + group] = tmp;
            }
        }
        for (int i = 0; i < numsSize - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return true;
            }
        }
        return false;
    }*/
	return 0;
}