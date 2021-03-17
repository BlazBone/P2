#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//int tabela[100000]; boljsi nacin kot notr funkcje but najboljsi je malloc
int main(void)
{
    //int tabela[1000000]; // NIKOLI IN NIKDAR
        //sklad se prevec napolni zato vedno ko delamo tabele damo static

    int n;
    scanf("%d", &n);

    int* tabela = malloc(n * sizeof(int));
    
    int a;
    bool napacnoStevilo = false;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        
        if (a >= n)
        {
            napacnoStevilo = true;
            break;
        }
        
        tabela[i] = a;
    }
    
    if (!napacnoStevilo)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (tabela[j] == i)
                {
                    tabela[j] = -1;
                    break;
                }       
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (tabela[i] != -1)
            {
                napacnoStevilo = true;
                break;
            }   
        }
    }
    
    napacnoStevilo ? printf("NE\n") : printf("DA\n");
    free(tabela);
}