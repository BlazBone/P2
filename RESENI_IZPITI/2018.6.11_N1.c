
/*
 * Va"sa re"sitev prve naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *ljudje = malloc(1001 * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &ljudje[i]);
    }

    int visina;
    int daljnevidci = 0;
    char alije = 1;
    for (int j = 0; j < n; j++) {
        visina = ljudje[j];
        for (int k = j + 1; k < n; k++) {
            if (visina < ljudje[k]) {
                alije = 0;
            }
        }
        if (alije == 1) {
            daljnevidci++;
        }
        alije = 1;
    }
    printf("%d\n", daljnevidci);
    return 0;
}
