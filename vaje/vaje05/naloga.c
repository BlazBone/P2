
#include <stdio.h>
#include <stdlib.h>

#include "naloga.h"

int vsota(int* zac, int* kon) {
    int i = 0;
    int sum = 0;
    while (&zac[i] != &kon[1])
    {
        sum += zac[i];
        i++;
    }
    return sum;
}

void indeksInKazalec(int* t, int* indeks, int** kazalec) {
    if (*indeks == -1)
    {
        *indeks = (*kazalec - t);
    }else{
        *kazalec = t + *indeks;
    }
}

void frekvenceCrk(char* niz, int** frekvence) {
    char *p = niz;

    int *array = calloc( sizeof(int), 26);
    
    while (*p != '\0')
    {
        char znak = *p;
        
        if ((znak >= 'A' && znak <='Z') || (znak >= 'a' && znak <='z'))
        {
            int indeks = (znak >= 'a') ? (znak - 'a') : (znak - 'A');
            array[indeks]++;
        }
        
        p++;
    }
    
    *frekvence = array;

}

int main() {
    return 0;
}