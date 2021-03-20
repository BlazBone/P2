#include <stdio.h>
#include <stdlib.h>

#define MAKS_DOLZINA 5000001

int *tabela;


int main(void)
{
    tabela = calloc(sizeof(int), MAKS_DOLZINA);
    int stStevil;
    int ciljnaVsota;
    scanf("%d %d",&stStevil, &ciljnaVsota);
    int temp;
    for (int i = 0; i < stStevil; i++)
    {
        scanf("%d", &temp);
        tabela[temp]++;
    }
    int sum = 0;
    int soda = 1 + (ciljnaVsota % 2);
    for (int i = 0; i < ciljnaVsota/2 + 1; i++)
    {
        int druga = ciljnaVsota - i;
        if (druga < i )
        {
            break;
        }
        if (druga == i)
        {
            int koliko = tabela[druga];
            int soda = koliko % 2;
            if (soda)
            {
                sum += koliko/2 * (koliko/2 + 1);
                //printf("smo tuki liha");
            }else {
                sum += koliko/2 * koliko/2;
                //printf("smo tuki soda");
            }
            break;
        }else {
            sum += tabela[i] * tabela[druga];
        }
    }
    printf("%d\n",sum);
    return 0;   
}