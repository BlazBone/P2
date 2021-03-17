

#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool f(int x, int y) {
    return ((y % x) == 1);
}

int main() {
    printf("%d\n", tranzitivnost(20, 100));   // 2
    return 0;
}
 