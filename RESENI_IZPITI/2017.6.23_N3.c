#include <stdio.h>
#include <stdlib.h>

int pari[18][2];
void print(int *t, int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d", t[i]);
    }
    printf("\n");
}
void rec(int n, int *s, int k, int nivo)
{
    nivo++;
    if (k == n) {
        print(s, k);
        return;
    }
    for (int i = pari[k][0]; i <= pari[k][1]; i++) {
        s[k] = i;
        rec(n, s, k + 1, nivo);
    }
    return;
}
/* void rec(int n, int *s, int k)
{
    if (n < 0) {
        print(s, k);
        return;
    }
    for (int i = pari[k][0]; i <= pari[k][1]; i++) {
        s[k] = i;
        rec(n - 1, s, k + 1);
    }
    return;
} */
int main()
{
    int n;
    scanf("%d", &n);
    int *tab = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &pari[i][0], &pari[i][1]);
    }
    rec(n, tab, 0, -1);
    return 0;
}