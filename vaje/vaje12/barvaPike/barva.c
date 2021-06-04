#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    FILE *slika;
    slika = fopen(argv[1],"r");

    int y = argv[2][0] - '0';
    int x = argv[3][0] - '0';

    char *prazno = malloc(100);
    int visina, sirina;
    fgets(prazno,100,slika);
    fscanf(slika,"%d%d", &sirina, &visina);
    fgetc(slika);
    fgetc(slika);
    fgetc(slika);
    fgetc(slika);
    fgetc(slika);
    //printf("%d %d\n %d %d\n", y, x, sirina, visina);
    


    short R, G, B;
    int zacetniByte = (y*sirina + x)*3; 
    fread(prazno,1,zacetniByte,slika);
    R = fgetc(slika);
    G = fgetc(slika);
    B = fgetc(slika);

    printf("%d %d %d\n", R,G,B);
    return 0;
}
