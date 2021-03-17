#include <stdio.h>

int collatz(int n)  // <- LEPO IN PRAV
{
    if(n % 2 == 0)
        goto even;
    odd:
        n = 3 * n + 1;
        goto exit;
    even:
        n = n / 2;
        goto exit;
    exit:
        return n; 
   
}

int collatz_length(int a)
{
    int len = 1;
    loop:
        if(a == 1)
            goto exit;
        a = collatz(a);
        len++;
    goto loop;
    
    exit:
        return len;
}

int main(void)
{
    int n = 6969;
    printf("%d\n", collatz_length(n));
    return 0;
}
