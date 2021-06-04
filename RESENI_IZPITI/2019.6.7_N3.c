#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long memo[100][100];

long stej(int n, int v)
{
    if (n == 0) {
        if (v == 0) {
            return 1;
        } else {
            return 0;
        }
    }

    if (v < 0) {
        return 0;
    }

    if (memo[n][v] != -1) {
        return memo[n][v];
    } else {
        memo[n][v] = stej(n - 1, v + 1) + stej(n - 1, v - 1);
        return memo[n][v];
    }
}

int main()
{
    int stevilo;
    scanf("%d\n", &stevilo);

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            memo[i][j] = -1;

    printf("%ld\n", stej(stevilo, 0));
    return 0;
}