char* fromLast(char* last) {
    char *s = last;
    int count;
    int index = 0;
    char *result = (char*) malloc(2 * strlen(last));
    while(*s != '\0') { 
        count = 1;
        while(*s == *(s+1)) {   
            count++;
            s++;
        }
        result[index++] = count + '0';
        result[index++] = *(s);
        s++;
    }
    result[index] = '\0';
    return result;
}
char* countAndSay(int n) {
    if(n == 1) 
        return "1";
    return fromLast(countAndSay(n-1));
}
