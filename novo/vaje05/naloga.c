
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "naloga.h"

int vsota(int* zac, int* kon) {
    
    int sum = 0;

    while (zac != kon)
    {
        sum += *zac;
        zac++; 
    }
    

    return sum;
}

void indeksInKazalec(int* t, int* indeks, int** kazalec) {
    int *ptr = *kazalec;
    if (*indeks == -1)
    {
        
        int i = 0;
        while (t != ptr)
        {
            i++;
            t++;
        }
        *indeks = i;
    }else {
        *kazalec = &(t[*indeks]) ;
    }
    
}

void frekvenceCrk(char* niz, int** frekvence) {
   int *ponovitve;
   ponovitve = calloc(sizeof(int), 30);
    int dolzina = strlen(niz);
    for (int i = 0; i < dolzina; i++)
    {
        char crka = niz[i];
        if (crka >= 'a' && crka <= 'z')
        {
            ponovitve[crka - 'a']++;
        }else if (crka >= 'A' && crka <= 'Z')
        {
            ponovitve[crka - 'A']++;
        }
        
    }
    
    *frekvence = ponovitve;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}
