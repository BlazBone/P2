
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int** ap2pp(int(*kazalec)[N], int izvornoStVrstic, int ciljnoStVrstic) {
    int numElems = (N*izvornoStVrstic)/ciljnoStVrstic + 1;
    printf("%d\n%d", numElems, N);
    int **ptrPtr;

    ptrPtr = malloc(sizeof(int*)*ciljnoStVrstic);
    int aba = 0;
    for (int i = 0; i < ciljnoStVrstic; i++)
    {
        printf("i=%d\n", i);
        ptrPtr[i] = malloc(sizeof(int)*numElems);
        for (int j = 0; j < numElems; j++)
        {
            printf("j=%d\n", j);
            if (j != numElems - 1)
            {
                ptrPtr[i][j] = 1;
                aba++;
            }else {
                printf("smo tuki");
                ptrPtr[i][j] = 0;
            }
            
           
        }
        
    }
    

    return ptrPtr;
}

int (*pp2ap(int** kazalec, int izvornoStVrstic, int* ciljnoStVrstic))[N] {
    // popravite / dopolnite
    return NULL;
}

int TABELA[][N] = {
    { 5,  7, 12,  9,  8},
    { 1, 15,  3,  6, 14},
    {11, 10,  2, 13,  4}
};



int main() {
   int izvornoStVrstic = sizeof(TABELA) / sizeof(TABELA[0]);
    int ciljnoStVrstic = 5;
    int** rezultat = ap2pp(TABELA, izvornoStVrstic, ciljnoStVrstic);

    for (int i = 0;  i < ciljnoStVrstic;  i++) {
        int* p = rezultat[i];
        while (*p != 0) {
            printf("%3d", *p);
            p++;
        }
        printf("\n");
        free(rezultat[i]);
    }
    free(rezultat);
    return 0;
}
