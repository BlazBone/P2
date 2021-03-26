
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -e__main__ -o test01 test01.c naloga1.c
./test01

*/

#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"


int* poisci(int* t, int* dolzina, int** konec) {
    int counter = 0;
    while (*t != 0)
    {
        t--;
    }
   
    //tukaj kaze t na niclo oz pred zacetek podzaporedja
    t++;
    int *prviElement = t;
    while (*t != 0)
    {
        t++;
        counter++;
    }
    
    *dolzina = counter;
    
    t--;
    *konec = t;

    return prviElement;
}

int main() {

    return 0;
}
