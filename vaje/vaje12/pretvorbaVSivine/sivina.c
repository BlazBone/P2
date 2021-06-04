#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *slika;
    slika = fopen(argv[1], "r");
    FILE *end;
    end = fopen(argv[2], "w");

    fprintf(end, "P5\n");

    char *prazno = malloc(100);
    int visina, sirina;
    fgets(prazno, 100, slika);
    fscanf(slika, "%d%d", &sirina, &visina);
    fgetc(slika);
    fgetc(slika);
    fgetc(slika);
    fgetc(slika);
    fgetc(slika);
    fprintf(end, "%d %d\n", sirina, visina);
    fprintf(end, "255\n");

    int R, G, B, S;

    for (int i = 0; i < sirina * visina; i++)
    {
        R = fgetc(slika);
        G = fgetc(slika);
        B = fgetc(slika);

        S = (30 * R + 59 * G + 11 * B) / 100;
        fputc(S, end);
    }

    return 0;
}
