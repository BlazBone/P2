#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *imeVhoda = malloc(1002 * sizeof(char));
    char *imeIzhoda = malloc(1002 * sizeof(char));
    char znak;

    scanf("%s%s%*c%c", imeVhoda, imeIzhoda, &znak);
    // printf("%s\n%s\n%c\n",imeVhoda, imeIzhoda, znak);

    FILE *vhod = fopen(imeVhoda, "r");
    FILE *izhod = fopen(imeIzhoda, "w");

    char *vrstica = malloc(1024 * sizeof(char));
    char *prejsnaVrstica = malloc(1024 * sizeof(char));
    // int b = sizeof(imeIzhoda);
    // printf("%d\n", b);
    while ((fgets(vrstica, 1024, vhod)) != NULL) {
        if (strchr(vrstica, znak) != NULL) {
            strcpy(prejsnaVrstica, vrstica);
        }
    }
    // fputs(prejsnaVrstica, izhod);
    fprintf(izhod, "%s", prejsnaVrstica);

    fclose(vhod);
    fclose(izhod);
    free(imeIzhoda);
    free(imeVhoda);
    free(vrstica);
    free(prejsnaVrstica);
    return 0;
}
