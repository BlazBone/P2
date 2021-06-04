#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char table[500][500];

int main()
{
    int n, visina = 0, maxvisina = 0;
    char znak;
    
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        znak = getchar();
        if (znak == 'G') {
            table[500 - visina][i] = '/';
            visina++;
            if (visina > maxvisina) {
                maxvisina = visina;
            }
        }
        if (znak == 'D') {
            visina--;
            table[500 - visina][i] = '\\';
        }
    }

    for (int k = maxvisina - 1; k >= 0; k--) {
        for (int j = 0; j < n; j++) {
            if (table[500 - k][j] == 0) {
                printf(".");
            } else {
                printf("%c", table[500 - k][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
