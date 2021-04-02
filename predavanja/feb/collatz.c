#include <stdio.h>

// ce je n sod potem naslednji element zaporedja potem naslednji element  n/2
// cene pa 3n + 1

//deklaracija funkcije
int collatz(int haha); // <- LEPO IN PRAV   (prototip funkcije)
//int collatz(int); // <- GRDO IN PRAV 

//definicija funkcije
int collatz(int a)  // <- LEPO IN PRAV
{
    if(a % 2 == 0) return a / 2;

    return 3 * a + 1;
}

int collatz_length(int a)
{
    int len = 1;
    while (a != 1)
    {
        a = collatz(a);
        len++;
    }
    
    return len;
}

int main(void)
{
    int n = 6969;
    printf("%d\n", collatz_length(n));
    return 0;
}
