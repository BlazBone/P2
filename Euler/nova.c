#include <stdio.h>


 void foo(int x[12])
    {
        printf("%zu\n", sizeof x);     // 8?! What happened to 48?
        printf("%zu\n", sizeof(int));  // 4 bytes per int
    
        printf("%zu\n", sizeof x / sizeof(int));  // 8/4 = 2 ints?? WRONG.
    }



int main(void)
{

    int i;

    float f[4];
    int a[12];
    foo(&a);
    f[0] = 3.14159;  // Indexing starts at 0, of course.
    f[1] = 1.41421;
    f[2] = 1.61803;
    f[3] = 2.71828;
     for (i = 0; i < 4; i++) {
        printf("%f\n", f[i]);
    }

    printf("%zu\n", sizeof(f));




    int tabela[4][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16} };


    for (int vrstica = 0; vrstica < 4; vrstica++){
        for (int stolpec = 0; stolpec < 4; stolpec++){
            printf("%3d", tabela[vrstica][stolpec] );

        }
        printf("\n");
    }
}




/*
void dodaj(int *aba){

    *aba = *aba + 1;
}

int main(void)
{
    int steviloKrac;
    int *pointerNaSteviloKrac;

    steviloKrac = 7;

    pointerNaSteviloKrac = &steviloKrac;

    *pointerNaSteviloKrac = 20;

    printf("stevilo krac je sedaj %d\n", steviloKrac);

    dodaj(pointerNaSteviloKrac);
    printf("stevilo krac je sedaj %d\n", *pointerNaSteviloKrac);

    dodaj(&steviloKrac);
    printf("stevilo krac je sedaj %d\n", steviloKrac);



}


*/