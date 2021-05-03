
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

int** ap2pp(int(*kazalec)[N], int izvornoStVrstic, int ciljnoStVrstic) {
    int numElems = (N*izvornoStVrstic)/ciljnoStVrstic + 1;

    int TABLE[ciljnoStVrstic][numElems];

    int ptr = &TABLE[0][0];
    
    for (int i = 0; i < ciljnoStVrstic; i++)
    {
        for (int j = 0; j < numElems; j++)
        {
            
        }
        
    }
    

    return NULL;
}

int (*pp2ap(int** kazalec, int izvornoStVrstic, int* ciljnoStVrstic))[N] {
    // popravite / dopolnite
    return NULL;
}

int* TABELA[] = {
    (int[]) { 7,  0},
    (int[]) { 3, 12, 16,  1,  0},
    (int[]) { 2,  8, 11,  0},
    (int[]) { 5, 13,  9,  0},
    (int[]) {14,  4,  0},
    (int[]) {15,  6, 10,  0},
};



int main() {
    int izvornoStVrstic = sizeof(TABELA) / sizeof(TABELA[0]);
    int ciljnoStVrstic = 0;
    int(*rezultat)[N] = pp2ap(TABELA, izvornoStVrstic, &ciljnoStVrstic);

    for (int i = 0;  i < ciljnoStVrstic;  i++) {
        for (int j = 0;  j < N;  j++) {
            printf("%3d", rezultat[i][j]);
        }
        printf("\n");
    }
    free(rezultat);

    exit(0);
    return 0;
}
