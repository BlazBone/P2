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
    long unsigned sum = 0;
    
    for (int i = 0; i < ciljnaVsota/2 + 1; i++)
    {
        int druga = ciljnaVsota - i;
        if (druga < i )
        {
            break;
        }
        if (druga == i)
        {
            //printf("hello %d\n", sum);
            int koliko = tabela[druga];
            //printf("%d\n",koliko);
            for (int i = 1; i < koliko; i++)
            {

                sum += i;
                //printf("    %d\n",sum);
            }
            
            break;
        }else {
            sum += tabela[i] * tabela[druga];
        }
        //printf("helo\n");
    }
    printf("%ld\n",sum);
    return 0;   
}