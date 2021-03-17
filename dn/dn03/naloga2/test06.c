#include <stdio.h>
#include <stdbool.h>
#include "tranzitivnost.h"

bool f(int x, int y) {
    return y != x;
}

int main() {
    printf("%d\n", tranzitivnost(1, 100));   // 2
    return 0;
}
 