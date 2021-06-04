#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int matrika[8][8];

void izpisiMatrika()
{
    for (int y = 0; y <= 7; y++) {
        for (int x = 0; x <= 7; x++) {
            printf("%2d", matrika[x][y]);
        }
        printf("\n");
    }
}

long long unsigned binaryToInt()
{
    char start = 0;
    long long unsigned prejsni = 0;
    for (int y = 0; y <= 7; y++) {
        for (int x = 0; x <= 7; x++) {
            if (start == 0) {
                if (matrika[x][y] == 1) {
                    start = 1;
                    prejsni = 1;
                }
            } else {
                prejsni = prejsni * 2 + matrika[x][y];
            }
        }
    }
}

void premiki(int *tabela, int n)
{
    int x = 7;
    int y = 7;
    matrika[7][7] = 1;
    for (int i = 0; i < n; i++) {
        switch (tabela[i]) {
        case 0:
            // LEVO
            if (x > 0) {
                x--;
                matrika[x][y] = 1;
            }
            break;
        case 1:
            // GOR
            if (y > 0) {
                y--;
                matrika[x][y] = 1;
            }
            break;
        case 2:
            // DESNO
            if (x < 7) {
                x++;
                matrika[x][y] = 1;
            }
            break;
        case 3:
            // DOL
            if (y < 7) {
                y++;
                matrika[x][y] = 1;
            }
            break;
        default:
            break;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int *tabela = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &tabela[i]);
    }

    premiki(tabela, n);

    // izpisiMatrika();

    printf("%llu\n", binaryToInt());

    return 0;
}