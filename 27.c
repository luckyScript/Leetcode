int removeElement(int* nums, int numsSize, int val) {
    int *begin = nums, *end = nums + numsSize;
    for (;begin<end;begin++) {
        if(*begin != val) {
            *nums++ = *begin;
        }
    }
    return numsSize-(end-nums);
}
