#include <stdio.h>

int numcalls = 0;

int fib_rec(int n)
{
    numcalls++;
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 50; i++)
    {
        numcalls =0;
        printf("Fib(%2d) = %d",i,fib_rec(i));
        printf(" (%d)\n",numcalls);
    }
    return 0;
}
