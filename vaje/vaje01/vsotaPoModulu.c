#include <stdlib.h>
#include <stdio.h>

int main()
{
    int prvo = getchar() - '0';
    getchar();
    int drugo = getchar() - '0';

    putchar(48 + ((prvo + drugo) % 10));
    putchar('\n');
    return 0;
}