#include <math.h>
int reverse(int x) {
    long long res = 0;
    while(x) {
        res = res * 10 + x % 10;
        x /= 10;
    }
    if(res < pow(2,31) - 1 && res > -pow(2,31))
        return res;
    else
        return 0;
}
