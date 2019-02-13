int maxSubArray(int* nums, int numsSize) {
    if(numsSize == 1)
        return nums[0];
    int arr[numsSize];
    arr[0] = nums[0];
    int max = nums[0];
    for(int i = 1; i < numsSize; i++) {
        arr[i] =  nums [i] > arr[i-1]+nums[i]?nums[i]:arr[i-1]+nums[i];
        max = max>arr[i]?max:arr[i];
    }
    return max;
}
