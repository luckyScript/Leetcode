#include <stdio>

int* twoSum(int* nums, int numsSize, int target) {
    int *a, *b, *end;
    int *result = (int *)malloc(sizeof(int) * 2);
    end = nums + numsSize;
    for(a = nums;a < end; a++) {
        for(b= a + 1;b < end; b++) {
            if(*a + *b == target) {
                result[0] = a - nums;
                result[1] = b - nums;
            }
        }
    }
    printf("%d", result[1]);
    return result;
}
