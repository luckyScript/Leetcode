#include <stdio.h>
int myAtoi(char* str) {
    int i = 0;
    long long result = 0;
    int sign = 1;
    while(str[i] == ' ') {
        i++;
    }
    
    if (str[i] == '-' || str[i] == '+') {
        sign = sign - 2*(str[i++] == '-');
    }
    while(str[i] != '\0') {
        char c = str[i];
        i++;
        if(c <= '9' && c >= '0') {
            result = 10*result + (c-'0');   
            if(sign *result > pow(2,31)-1) {
                return pow(2,31)-1;
            } else if(sign *result < (-pow(2,31))) {
                return -pow(2,31);
            }
        } else {
            break;
        }
    }
    result = sign * result;
    return result;
    
}
