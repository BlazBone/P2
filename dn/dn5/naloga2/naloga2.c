
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -e__main__ -o test01 test01.c naloga2.c
./test01

*/

#include <stdio.h>
#include "naloga2.h"

void zamenjaj(int** a, int** b) {
    int *temp = *a;

    *a = *b;
    *b = temp;
}

void uredi(int** a, int** b, int** c) {
    int ena = **a;
    int dva = **b;
    int tri = **c;

    int *temp;

    if (ena <= dva && dva <= tri){
        //ze urejeno
        
    }else if (ena <= tri && tri <= dva){
        temp = *c;
        *c = *b;
        *b = temp;
    }else if (dva <= ena && ena <= tri){
        temp = *a;
        *a = *b;
        *b = temp;

    }else if (dva <= tri && tri <= ena){
        temp = *a;
        *a = *b;
        *b = *c;
        *c = temp;
    }else if (tri <=ena && ena <= dva){
        temp = *a;
        *a = *c;
        *c = *b;
        *b = temp;
        
    }else if (tri <= dva && dva <= ena){
        temp = *a;
        *a = *c;
        *c = temp;
    }
    

}

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}
