#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int zaba(int n, int k1, int k2, int s, int pozicija, int *ploscice)
{
    if (pozicija < 0 || pozicija > n)
    {
        return;
    }else {
        ploscice[pozicija] = 1;
        if (s >= 1)
        {
            //se skacemo
            zaba(n , k1, k2, s-1,pozicija+k1,ploscice);
            zaba(n , k1, k2, s-1,pozicija+k2,ploscice);
            zaba(n , k1, k2, s-1,pozicija-k2,ploscice);
            zaba(n , k1, k2, s-1,pozicija-k1,ploscice);
        }
        
    }
}

int main(int argc, char const *argv[])
{
    int n, k1, k2, s;
    scanf("%d%d%d%d", &n, &k1, &k2, &s);
    int *ploscice;

    ploscice = malloc(sizeof(int) * n);
    ploscice[0] = 1;

    zaba(n, k1, k2, s, 0, ploscice);
    int stpozi= 0;
    for(int i = 0; i < n; i++)
    {
        stpozi += ploscice[i];

    }
    printf("%d\n", stpozi);
    return 0;
}
