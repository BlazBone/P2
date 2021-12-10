#include <stdio.h>
#include <stdlib.h>


int vsote1(int n, int k)
{
    if (k == 0)
    {
        return 0;
    }
    if (k > n)
    {
        k = n;
    }
    if (n == 0)
    {
        return 1;
    }
    int a = 0;
    a += vsote1(n,k-1);
    a += vsote1(n-k,k);
    return a;
}


int main(int argc, char const *argv[])
{
    int n, k;
    scanf("%d%d", &n,&k);

    printf("%d\n", vsote1(n,k));


    return 0;
}
