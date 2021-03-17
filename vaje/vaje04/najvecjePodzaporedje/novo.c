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

    for (int i = 0; i < dolzina; i++)
    {
        scanf("%d", &zaporedje[i]);
    }
    
    int najVsota = INT_MIN;

    //za vsako podzaporedje izracunamo vsotot in vzdrzujemo njen dosedanji maksimum rekord

    for (int i = 0; i < dolzina; i++)
    {
        int vsota = 0;
        for (int j = i; j < dolzina; j++)
        {
            vsota +=  zaporedje[j];
            if(vsota > najVsota){
                najVsota = vsota;
            }
        }
        
    }
    
    printf("%d\n", najVsota);

    return 0;
}