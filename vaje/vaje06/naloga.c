
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int steviloZnakov(char* niz, char znak) {
    int counter = 0;
    while (*niz != '\0')
    {
        if (*niz == znak)
        {
            counter++;
        }
        niz++;
    }
    return counter;
}

char* kopirajDoZnaka(char* niz, char znak) {
    char *kopi = niz;
    int dolzina = 0;
    while (*kopi != znak && *kopi != '\0')
    {
        dolzina++;
        kopi++;
    }
    char *druga = calloc(sizeof(char), dolzina + 1);
    strncpy(druga, niz, dolzina);
    return druga;
}

char** razcleni(char* niz, char locilo, int* stOdsekov) {
    int ponovitev = steviloZnakov(niz, locilo);

    char **tabelaTabel = calloc(8, ponovitev + 1);

    for (int i = 0; i < ponovitev + 1; i++)
    {
        tabelaTabel[i] = kopirajDoZnaka(niz, locilo);
        niz += strlen(tabelaTabel[i]) + 1;
    }
    *stOdsekov = ponovitev + 1; 

    return tabelaTabel;
}

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}
