
/*

Prevajanje in poganjanje:

gcc -o test01 test01.c inverz.c -lm
./test01

*/

#include <stdio.h>
#include <stdbool.h>

#include "inverz.h"

long inverz(long x, long a, long b) {
    //can do rekurzija or while
    long sredina = (a + b)/2;
    long vrednostF = f(sredina);


    while (x != vrednostF)
    {
        if (x > vrednostF)
        {
            a = sredina + 1;
        }else if (x < vrednostF)
        {
            b = sredina - 1;
        }
        sredina = (a + b)/2;
        vrednostF = f(sredina);
    }
    return sredina;
}

// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
