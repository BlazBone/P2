
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

uchar *preberi(char *imeDatoteke, int *sirina, int *visina, int *stBajtov)
{
    FILE *vhod = fopen(imeDatoteke, "r");

    // preberemo P6
    char *pVI = malloc(10 * sizeof(char));
    fgets(pVI, 10, vhod);

    // preberemo sirino in visino in new line
    fscanf(vhod, "%d%d\n", sirina, visina);
    *stBajtov = ((*sirina) * (*visina)) * 3;
    // printf("MOJ %d %d\n", *sirina, *visina);

    // preberi 255
    fgets(pVI, 10, vhod);
    // printf("<-TEST \n=%s=TEST->\n", pVI);

    int dolzina = (*visina) * (*sirina);
    unsigned char rgb[3];
    uchar *pike = malloc((*stBajtov)*sizeof(uchar));

    for (int i = 0, j = 0; i < dolzina; i++) {
        fread(rgb, sizeof(unsigned char), 3, vhod);
        pike[j] = rgb[0];
        pike[j+1] = rgb[1];
        pike[j+2] = rgb[2];
        j += 3;
    }

    free(pVI);

    fclose(vhod);

    return pike;
}

int sivina(uchar *pike, int sirina, int visina, int vrstica, int stolpec)
{
    int index = ((vrstica * 3)* sirina)+ (stolpec * 3);
    // int r = pike[index];
    
    return ((pike[index]+pike[index+1]+pike[index+2]) / 3);
}

int main()
{   
    int sirina, visina, stBajtov;
    uchar* pike = preberi("slika16.ppm", &sirina, &visina, &stBajtov);

    printf("%d %d\n", sirina, visina);
    printf("%d\n", stBajtov);
    for (int i = 0;  i < stBajtov;  i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", pike[i]);
    }

    exit(0);
    return 0;
    return 0;
}
