
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
#include <string.h>

int main()
{
    char *vrstica = malloc(1001 * sizeof(char));
    int stevka;

    scanf("%d%s", &stevka, vrstica);

    // printf("%d\n%s\n", stevka, vrstica);

    int dolzina = strlen(vrstica);

    for (int i = 0; i < dolzina; i++) {
        if (i == 0 && vrstica[i] >= 'a' && vrstica[i] <= 'z') {
            vrstica[i] = vrstica[i] - ' ';
        }
        if (i != 0 && vrstica[i] >= 'a' && vrstica[i] <= 'z' && vrstica[i - 1] == '_') {
            vrstica[i] = vrstica[i] - ' ';
        }
    }

    printf("%s\n", vrstica);

    return 0;
}
