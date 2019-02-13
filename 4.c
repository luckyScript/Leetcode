double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int totalSize = nums1Size + nums2Size;
    if(totalSize % 2 == 0) {
        int m = findTargetNumber(nums1, nums2, totalSize/2, nums1Size, nums2Size);
        int n = findTargetNumber(nums1, nums2, totalSize/2+1, nums1Size, nums2Size);
        return ( m+n )/2.0;
        
    } else {
        return 1.0 * findTargetNumber(nums1, nums2, (totalSize+1)/2, nums1Size, nums2Size);
    }
}
int findTargetNumber(int* nums1, int *nums2, int target, int nums1Size,int nums2Size) {
    if(nums1Size == 0)
        return nums2[target-1];
    if(nums2Size == 0)
        return nums1[target-1]; 
    if(target == 1) {
        return *nums1>*nums2?*nums2:*nums1;
    }
    if(*nums1 < *nums2) {
        if(!*(nums1+1)) 
        return findTargetNumber(nums1, nums2, target-1, 0,nums2Size);
        return findTargetNumber(nums1+1, nums2, target-1, nums1Size-1, nums2Size);
    } else {    
        if(!*(nums2+1)) 
        return findTargetNumber(nums1, nums2, target-1, nums1Size,0);
        return findTargetNumber(nums1, nums2+1, target-1, nums1Size, nums2Size-1);
    }
}
