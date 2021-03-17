#include <stdio.h>

int main(void)
{
    //signed
    printf("int: %lu\n",sizeof(int));
    printf("short int: %lu\n",sizeof(short int));
    printf("long int: %lu\n",sizeof(long int));
    printf("long: %zu\n", sizeof(long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));


    //unsigned je  >= 0
    printf("unsigned int: %lu\n",sizeof(unsigned int));
    printf("unsigned short int: %lu\n",sizeof(unsigned short int));


    signed char sc; // 256 vrednosti od -128 do + 127
    unsigned char uc; // obsega od 0 do 255
    printf("char: %lu\n",sizeof(char));
    
    //float, double in long double
    printf("long double: %zu\n", sizeof(long double)); //128 bit oz 16 bajtu
    printf("float: %zu\n", sizeof(float)); // 32 bit 4 bajt
    printf("double: %zu\n", sizeof(double)); // 64 bit 8 bajt
    
    
    printf("\n");
    float x = 0.1;
    if (x == 0.1){
        printf("ENAKO\n");
        //cudezno to ni enako
    }

    if ((x - 0.1 < 1e-3) || (x - 0.1 > 1e-3)){
        printf("PRIBLIZNO\n");
        //cudezno to ni enako
    }
    
    //ker nemoremo floatu primerjati primerajmo kako blizu je float do neke stevilke 
    while (x != 1.0){
        x = x + 0.1;
        //ostanemo v loop
        printf("%30.60f\n", x);
    }
    printf("KONEC\n");

    
    
    return 0;
}