#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX(a, b) (a) > (b) ? (a) : (b)

int stPredmetov, volumn, *volumni, *cene;
bool *je;

int cena(int index, int preostalVolumn, int stPredmetov, bool vsebujeLiho)
{
    if (index >= stPredmetov)
    {
        return 0;
    }

    int najCena = cena(index + 1, preostalVolumn, stPredmetov, vsebujeLiho);
    int cena2 = 0;
    if (preostalVolumn >= volumni[index])
    {
        if (!vsebujeLiho)
        {
            if (volumni[index] % 2 == 1)
            {
                cena2 = cene[index] + cena(index + 1, preostalVolumn - volumni[index], stPredmetov, true);
            }
            else
            {
                cena2 = cene[index] + cena(index + 1, preostalVolumn - volumni[index], stPredmetov, vsebujeLiho);
            }
        }
        else
        {
            if (volumni[index] % 2 == 0)
            {
                cena2 = cene[index] + cena(index + 1, preostalVolumn - volumni[index], stPredmetov, vsebujeLiho);
            }
            else
            {
                cena2 = cena(index + 1, preostalVolumn, stPredmetov, vsebujeLiho);
            }
        }

        //printf("c1=%d c2=%d", najCena, cena2);
    }

    return MAX(najCena, cena2);
}

int main(int argc, char const *argv[])
{

    scanf("%d%d", &volumn, &stPredmetov);

    volumni = malloc(stPredmetov * sizeof(int));
    cene = malloc(stPredmetov * sizeof(int));
    je = malloc(stPredmetov * sizeof(bool));
    for (int i = 0; i < stPredmetov; i++)
    {
        scanf("%d", &volumni[i]);
    }
    for (int i = 0; i < stPredmetov; i++)
    {
        scanf("%d", &cene[i]);
    }

    printf("%d\n", cena(0, volumn, stPredmetov, false));

    return 0;
}
