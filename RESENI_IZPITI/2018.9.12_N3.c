
/*
 * Va"sa re"sitev tretje naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 3 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int MEMO[100000000];
int unikatni = 0;

int funkcija(int a, int b, int n)
{
    if (n == 0) {
        MEMO[0] = 1;
        return 1;
    }
    if (MEMO[n] != 0) {
        return MEMO[n];
    } else {
        unikatni++;
        MEMO[n] = funkcija(a, b, n / a) + funkcija(a, b, n / b);
    }

    return MEMO[n];
}

int main()
{
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    funkcija(a, b, n);
    //printf("%d", a/b);
    printf("%d\n", unikatni + 1);
    return 0;
}
