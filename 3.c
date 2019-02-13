int lengthOfLongestSubstring(char* s) {
    int len = 0;
    int hashmap[128] = {0};
    char *left, *right;
    left = right = s;
    while(*right) {
        if(hashmap[*right] == 1) {
            len = (right - left) > len?right -left : len;
            while(*right != *left){
                --hashmap[*left++];
            }
            --hashmap[*left++];
        }
        ++hashmap[*right++];
    }
    return (right - left) > len?right -left : len;
}
