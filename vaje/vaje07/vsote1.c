#include <stdio.h>
#include <stdlib.h>

int fKje(int n, int k)
{
}

int fKni(int n, int k)
{
}

//vrne stevilo nacinov za zapis stevila n z vsoto kjer je najvecji sumand <= k
//f(5, 2)
// 2 + 2 + 1
// 2 + 1 + 1 + 1
// 1 + 1 + 1 + 1 + 1 + 1 + 1


long memo[401][401];


long f(int n, int k)
{
    //printf("%d + ",k);

    if (k > n) k = n;

    if (k == 0 && n == 0)
    {
        return 1;
    }
    else if (k == 0)
    {
        //printf("\n");
        return 0;
    }
    else
    {
        if (memo[n][k - 1] == 0)
        {
            memo[n][k - 1] = f(n, k - 1);
        }

        if (memo[n-k][k] == 0)
        {
            memo[n-k][k] = f(n - k, k);
        }
        
        return memo[n][k - 1] + memo[n-k][k];
    }
}

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);

    printf("%ld\n", f(n, k));

    return 0;
}
