#include <stdio.h>
#include <stdlib.h>

void izpisiStevke(int *stevilo, int stStevk)
{
    for (int i = 0; i <= stStevk; i++){
        printf("%d", stevilo[i]);
    }
    printf("\n");
}

int main()
{
    int *stevilo = (int *)malloc(1001 * sizeof(int));
    int stevka, stStevk = 0, prenos = 0, trenutno = 0;
    while (scanf("%1d", &stevka) != EOF) {
        stevilo[stStevk] = stevka;
        stStevk++;
    }
    // -1 oznacuje konec niza
    stevilo[stStevk] = -1;
    stStevk -= 2;

    // zadnja stevka
    int mnozitelj = stevka;
    for (int i = (stStevk); i >= 0; i--) {
        trenutno = (stevilo[i] * mnozitelj) + prenos;
        if (trenutno > 9) {
            prenos = trenutno / 10;
            trenutno = trenutno % 10;
        } else
            prenos = 0;

        stevilo[i] = trenutno;
    }

    if (prenos != 0){
        printf("%d", prenos);
    }
    izpisiStevke(stevilo, stStevk);
    return 0;
}