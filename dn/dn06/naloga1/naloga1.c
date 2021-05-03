
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga1.h"

static char *koncni[10000];
char *zdruzi(char **nizi, char *locilo)
{
    char **a;
    a = nizi;

    char *string = malloc(sizeof(char) * 40000);
    char *konc = malloc(sizeof(char) * 40000);
    int i = 0;

    int dolzinaLocila = strlen(locilo);
    while (a[i] != NULL)
    {
        strcat(string, a[i]);
        strcat(string, locilo);
        i++;
    }
    int dolzina = strlen(string);
    strncat(konc, string, dolzina - dolzinaLocila);
    return konc;
}

int main(void)
{
    return 0;
}
