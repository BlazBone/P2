#include <stdio.h>
#include <stdbool.h>

int vsotaDeliteljev(int n)
{
    int vsota = 0;
    int meja = n;
    for (int i = 1; i < meja; i++)
    {
        if (n % i == 0)
        {
            vsota += i;
            //printf("n: %d    i:%d\n", n, i);
        }
    }

    return vsota;
}

int imaPrijatelja(int n)
{
    int k = vsotaDeliteljev(n);

    if (vsotaDeliteljev(k) == n)
    {
        return k;
    }

    return -1;
    
    
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int k = imaPrijatelja(n);

    if (k == -1)
    {
        printf("NIMA\n");
    }else{
        printf("%d\n",k);
    }
    

    return 0;
}