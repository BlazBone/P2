#include <stdio.h>
#include <stdlib.h>


void izpisiTabelo(int *tabela, int k)
{

    for (int i = 0; i < k; i++)
    {
        if (i > 0)
        {
            printf(" + ");
        }
        printf("%d", tabela[i]);
    }


    printf("\n");
    
}
//vrne stevilo nacinov za zapis stevila n z vsoto kjer je najvecji sumand <= k
//f(5, 2)
// 2 + 2 + 1
// 2 + 1 + 1 + 1
// 1 + 1 + 1 + 1 + 1 + 1 + 1

long memo[401][401];

long f(int n, int k, int *tabela, int kazalec)
{
    
    if (k > n) k = n;

    if (k == 0 && n == 0)
    {
        izpisiTabelo(tabela, kazalec);
        return 1;
    }
    else if (k == 0)
    {
        //izpisiTabelo(tabela, kazalec);
        return 0;
    }
    else
    {
        //printf("a\n");
        tabela[kazalec] = k;
       //izpisiTabelo(tabela, kazalec);
       
        //printf("b\n");
        if (memo[n-k][k] == 0)
        {
            memo[n-k][k] = f(n - k, k, tabela, kazalec + 1);
        }

        if (memo[n][k - 1] == 0)
        {
            memo[n][k - 1] = f(n, k - 1, tabela, kazalec);
        }
       // printf("c\n");
        return memo[n][k - 1] + memo[n-k][k];
    }
}

int main(void)
{
    int n, k;
    
    scanf("%d %d", &n, &k);

    int *tabela = malloc(sizeof(int) * n );
    printf("%ld\n", f(n, k, tabela, 0));
    
    
    return 0;
}
