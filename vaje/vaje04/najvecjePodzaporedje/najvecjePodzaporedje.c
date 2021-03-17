#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main(void)
{

    int stStevil;
    scanf("%d", &stStevil);

    int* tabela = malloc(stStevil * sizeof(int));
    int a = 0;
    for (int i = 0; i < stStevil; i++)
    {
        scanf("%d", &a);
        tabela[i] = a;
    }
    

    int maxVsota = -99999999;
    int vsota = 0;
    for (int dolzinaPodzaporedja = 0; dolzinaPodzaporedja < stStevil; dolzinaPodzaporedja++)
    {
        for (int zacetekZaporedja = 0; zacetekZaporedja < stStevil - dolzinaPodzaporedja; zacetekZaporedja++)
        {
            vsota = 0;
            for (int i = zacetekZaporedja; i <= zacetekZaporedja + dolzinaPodzaporedja; i++)
            {
                vsota += tabela[i];
            }
            if (vsota > maxVsota)
            {
                maxVsota = vsota;
            }  
        }
    }
    
    printf("%d\n", maxVsota);
    free(tabela);
    return 0;
}
