#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char* imeVhoda = (char*) malloc(21 * sizeof(char));
    char* imeIzhoda = (char*) malloc(21 * sizeof(char));
    int velikost;

    scanf("%s%d%s", imeVhoda, &velikost, imeIzhoda);
    // printf("%s\n%d\n%s\n", imeVhoda, velikost, imeIzhoda); //TEST

    FILE *vhod = fopen(imeVhoda, "rb");
    FILE *izhod = fopen(imeIzhoda, "w");
    int znak;

    for (int i = 0; i < velikost; i++)
    {
        znak = fgetc(vhod);
        fprintf(izhod, "%02X\n", znak);
    }
    
    fclose(vhod); fclose(izhod);
    free(imeVhoda); free(imeIzhoda);

    return 0;
}
