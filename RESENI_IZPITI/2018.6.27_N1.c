
/*
 * Va"sa re"sitev prve naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 1 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int dolzina;
    scanf("%d", &dolzina);
    char c = getchar();
    // printf("%d-%c-\n", dolzina, c);
    int razdalja = 0;
    // int povprecje;
    int vsota = 0;
    int imenovalec = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '+')
        {
            if (razdalja != 0)
            {
                vsota += razdalja;
                imenovalec++;
                razdalja = 1;
            }else
            {
                razdalja++;
            }
            
            
        }else if (razdalja != 0)
        {
            razdalja++;
        }
        
        
    }
    printf("%d\n", vsota / imenovalec);
    

    return 0;
}
