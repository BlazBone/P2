#include <stdio.h>

int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int x = 69;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    int *p = a; // &a[0] to je ekvivalentno saj je pointer na prvega v tabeli

    printf("a[0]=%d\n", *p);
    printf("a[1]=%d\n", p[1]); //s pjem lahko uporabljamo oglate oklepaje kokr d je tabela
    printf("%p\n", p);
    p++;    //povecamo p...... p kaze za eno mesto v desno akaa kaze na drufi element pomeni p[0] = 1  p[1]=2 p[9]=bo *izven* tabele
                                // p[-1] pa bo kazal na 0 sepravi na prvo celico tako kot prej.
                                //p++ torej premakne indeks nepa spremeni vrednosti v tabeli
    // p++ pomeni povecaj p za velikost podatka n a katerega p kaze 
    //0x55d030509020
    //0x55d030509024
    // premakne naslov za 4 bajte 20->24
    printf("%p\n", p);
    printf("a[1]=%d\n", p[-1]);
    printf("a[0]=%d\n", *p);

    p = p + 1; // isto kot p++; lahko naredimo tudi zamik z p--;
    //0x55d030509028
    //ne pristejemo ena ampak p = p + 1*sizeof(int)     ker je p kazalec na int
    printf("%p\n", p);
    printf("a[1]=%d\n", p[-1]);
    printf("a[0]=%d\n", *p);


    int *b = &(a[0]);
    b[0] = 100;
    b[1] = 200;
    b[2] = 300;

    *(b + 3) = 400; // delam ampak je grdo raje b[3]
    *(4 + b) = 500; // zelo grdo
    5[b] = 600;     //zelo zelo grdo
    (2 * 3)[b] = 700; //3*zelo grdo
    ///vednmo pisi v obliki b[n] = xxx;

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    // c printa in dostopa tudi do prostora ki ni v arrayu ter jo lahko spreminja
    printf("x = %d a[10] = %d\n",x,a[10]); // da kar je naprej na pomenilniku ker smo 69 definirali takoj po tabeli naprinta kr 69

    a[10] = 777; // lahko celo nastavimo x posredno brez uporabe x saj a[10] kaze nanj
    printf("x = %d a[10]=%d\n",x,a[10]);


    int *c = &a[0];

    printf("a[15] = %d\n", a[15]);

    c--;

    printf("%d\n",*c);
    printf("a[0]=%d\n", c[1]);


    char petja[5] = "petja";
    printf("%s\n", petja);

    return 0;
}