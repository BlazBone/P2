#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int pike[256][256][256];

int main()
{
    char *imeDatoteke = (char *)malloc(21 * sizeof(char));
    scanf("%s", imeDatoteke);

    FILE *vhod = fopen(imeDatoteke, "r");

    char *garbage = (char *)malloc(10 * sizeof(char));
    fgets(garbage, 10, vhod);

    int sirina, visina;
    fscanf(vhod, "%d %d\n", &sirina, &visina);
    
    fgets(garbage, 10, vhod);
    free(garbage);

    int dolzina = visina * sirina;
    unsigned char r, g, b;
    unsigned char rgb[3];
    int stRazlicnih = 0;
    int najvecEnakih = 0;

    for (int i = 0; i < dolzina; i++) {
        fread(rgb, sizeof(unsigned char), 3, vhod);
        r = rgb[0];
        g = rgb[1];
        b = rgb[2];

        if (pike[r][g][b] == 0)
            stRazlicnih++;
        pike[r][g][b]++;
        if (pike[r][g][b] > najvecEnakih)
            najvecEnakih++;
    }

    fclose(vhod);
    printf("%d\n%d\n", stRazlicnih, najvecEnakih);
    return 0;
}