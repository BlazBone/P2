#include <stdio.h>


/*
f (0) = 1;
M (0) = 0

f (n) = n - M(f(n - 1))
M(n) = n - f(M(n - 1)) 

*/
int m(int n);

int f(int n)
{
    if (n == 0)
    {
        return 1;
    }else {
        return n - m(f(n - 1));
    }
    
}

int m(int n)
{
    if (n == 0)
    {
        return 0;
    }else {
        return n - f(m(n - 1));
    }
    
}

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        printf("(%d,%d) ", f(i), m(i));
    }
    printf("\n");

    return 0;
}