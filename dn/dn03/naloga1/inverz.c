
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
        if(vrednostF < 0){
            b = sredina;
        }else if(vrednostF < x){
            a = sredina;
        }else if(vrednostF > x){
            b = sredina;
        }else if(a > b){
            return -1; // kao napakca 
        }
        sredina = (a + b)/2;
        vrednostF = f(sredina);
    }
    
    return sredina;
    //ofc lohk rekurzija samo pride segmentation fault pr velikih cifrah but mybe sm sam nrobe nrdu

}

// Ta datoteka NE SME vsebovati funkcij main in f!
// Funkciji main in f sta definirani v datoteki test01.c.
