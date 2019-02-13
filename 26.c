int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;
    int len = 1;
    int *p = nums+1;
    int *end = nums + numsSize;
    while(p < end) {
        if(*p != *nums) {
            *(++nums) = *p;
            len++;
        }
        p++;
    }
    return len;
}

