#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>


#define MAKS_DOLZINA 1000000

int zaporedje[MAKS_DOLZINA];

int main()
{
    int dolzina;
    scanf("%d", &dolzina);
    int a;
    int vsota = 0;
    int najVsota = INT_MIN;
    for (int i = 0; i < dolzina; i++)
    {
        scanf("%d", &a);
        vsota += a;
        if (vsota > najVsota)
        {
            najVsota = vsota;
        }
        

        if (vsota <= 0)
        {
            vsota = 0;
        }
    }
    
    

    //za vsako podzaporedje izracunamo vsotot in vzdrzujemo njen dosedanji maksimum rekord

    
    
    printf("%d\n", najVsota);

    return 0;
}