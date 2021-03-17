/*
SESTAVNI DELI PROGRAMA V C-JU

ukazi ki se zacnejo s hashem napisani v eni vrstici 
1. preprocesorske ukaze #
2. komentarji // in /* 


3. opis podatkovnih tipov
4. opis spremenljivk   
5. opis funkcij


*/



#include <stdio.h>

//spremenljivka za for zanko v funkciji main

int i;

/* ta funkcija se bo prva zagnala */
int main()
{
    for (i = 0; i < 6; i++)
    {
        printf("Hello world\n");
    }
    
    
    return 0;
}