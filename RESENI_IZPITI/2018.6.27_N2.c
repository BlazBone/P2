
/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

Vozlisce *ustvari(Vozlisce *nasljednje, int podatek)
{
    Vozlisce *novo = malloc(sizeof(Vozlisce));
    novo->podatek = podatek;
    if (nasljednje == NULL)
    {
        novo->n = NULL;
        novo->nn = NULL;
        return novo;
    }
    

    novo->n = nasljednje;
    novo->nn = nasljednje->n;

    return novo;
}

Vozlisce *vstaviUrejeno(Vozlisce *zacetek, int element)
{
    Vozlisce *trenutni = zacetek;
    Vozlisce *nasljedni = zacetek->n;
    Vozlisce *prejsni = NULL;
    Vozlisce *druginasljedni = zacetek->nn;
    if (element < trenutni->podatek) {
        return ustvari(zacetek, element);
    }
    while (trenutni != NULL)
    {
        if (nasljedni == NULL)
        {
            trenutni->n = ustvari(NULL, element);
            if (prejsni != NULL)
            {
                prejsni->nn = trenutni->n;
            }
            trenutni->nn = nasljedni;
            return zacetek;
        }
        
        if (trenutni->podatek < element && element < nasljedni->podatek)
        {
            trenutni->n = ustvari(nasljedni, element);
            if (prejsni != NULL)
            {
                prejsni->nn = trenutni->n;
            }

            trenutni->nn = nasljedni;
            return zacetek;
        }
        prejsni = trenutni;
        trenutni = nasljedni;
        nasljedni = druginasljedni;
        if (nasljedni != NULL)
        {
            druginasljedni = nasljedni->n;
        }
    }
    


    return NULL;
}





/* void izpisi(Vozlisce* zacetek) {
    Vozlisce* p = zacetek;
    while (p != NULL) {
        if (p != zacetek) {
            printf(" -> ");
        }
        printf("%d", p->podatek);
        p = p->n;
    }
    printf(" | ");

    Vozlisce* pp = zacetek;
    while (pp != NULL) {
        if (pp != zacetek) {
            printf(" ->-> ");
        }
        printf("%d", pp->podatek);
        pp = pp->nn;
    }
    printf(" | ");
    if (zacetek != NULL) {
        Vozlisce* pp = zacetek->n;
        while (pp != NULL) {
            if (pp != zacetek->n) {
                printf(" ->-> ");
            }
            printf("%d", pp->podatek);
            pp = pp->nn;
        }
    }
    printf("\n");
}

Vozlisce* zgradiSeznam() {
    Vozlisce* v001 = malloc(sizeof(Vozlisce));
    Vozlisce* v002 = malloc(sizeof(Vozlisce));
    v001->podatek = 10;
    v002->podatek = 20;
    v001->n = v002;
    v002->n = NULL;
    v001->nn = NULL;
    v002->nn = NULL;
    return v001;
}

void pocisti(Vozlisce* zacetek) {
    if (zacetek != NULL) {
        pocisti(zacetek->n);
        free(zacetek);
    }
} */

int main()
{
    /* Vozlisce* zacetek = zgradiSeznam();

    printf("PREJ:   ");
    izpisi(zacetek);

    printf("VSTAVI: 25\n");
    zacetek = vstaviUrejeno(zacetek, 25);

    printf("POTEM:  ");
    izpisi(zacetek);

    pocisti(zacetek);
    exit(0);
    return 0; */
}
