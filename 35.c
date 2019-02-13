int searchInsert(int* nums, int numsSize, int target) {
    int *i = nums;
    while( i-nums < numsSize && *i < target) {
        i++;
    }
    return i - nums;
}
