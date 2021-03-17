
#include <stdio.h>
#include "inverz.h"

long f(long x) {
    return x * x;
}

int main() {
    printf("%ld\n", inverz(25, 1, 100));
    printf("%ld\n", inverz(25, 4, 500)); 
    printf("%ld\n", inverz(25, 1, 10009800000)); 
    printf("%ld\n", inverz(64, 1, 1000980000000000000)); 
    printf("%ld\n", inverz(36, 1, 1000980000000000)); 
    printf("%ld\n", inverz(81, 1, 10009000800000)); 
    printf("%ld\n", inverz(49, 1, 100000009800000)); 
    return 0;
}
